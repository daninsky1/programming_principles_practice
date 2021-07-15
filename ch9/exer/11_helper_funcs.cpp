// Chrono.cpp
#include "../../std_lib_facilities.h"
namespace Chrono {
enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
class Date {
public:
    class Invalid { }; // to throw as exception
    Date(int y, Month m, int d); // check for valid date and initialize
    Date(); // default constructor
    // the default copy operations are fine
    // nonmodifying operations:
    int day() const { return d; }
    Month month() const { return m; }
    int year() const { return y; } // modifying operations:
    void add_day(int n);
    void add_day(int& days_count, vector<int>& month_days_lt);
    void add_month(int n);
    void add_year(int n);
private:
    int y;
    Month m;
    int d;
};
    bool is_date(int y, Month m, int d); // true for valid date
    bool leapyear(int y); // true if y is a leap year
    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);
    ostream& operator<<(ostream& os, const Date& d);
    istream& operator>>(istream& is, Date& dd);
    
// member function definitions:
Date::Date(int yy, Month mm, int dd)
    : y{yy}, m{mm}, d{dd}
{
    if (!is_date(yy,mm,dd)) throw Invalid{};
}
const Date& default_date()
{
    static Date dd {2001,Month::jan,1}; // start of 21st century
    return dd;
}
Date::Date()
    :y{default_date().year()},
    m{default_date().month()},
    d{default_date().day()}
{
}void Date::add_day(int n)
{
    int day_sum_count = d + n;
    vector<int> month_days_lt = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    add_day(day_sum_count, month_days_lt);
}
void Date::add_day(int& days_count, vector<int>& month_days_lt)
{
    if (!days_count) return;
    int day_max = month_days_lt[static_cast<int>(m)];
    
    if (days_count > day_max) {
        days_count -= day_max;
        add_month(1);
    }
    else {
        d = days_count;
        days_count = 0;
    }
    
    add_day(days_count, month_days_lt);
}
void Date::add_month(int n)
{
    int month_sum = (n + static_cast<int>(m));
    int month_max = 12;
    if (month_sum  > month_max) {
        int year_diff = month_sum / month_max;
        add_year(year_diff);
    }
    if (month_sum %= month_max) m = Month(static_cast<Month>(month_sum));
}
void Date::add_year(int n)
{
    if (m==Month::feb && d==29 && !leapyear(y+n)) { // beware of leap years!
    m = Month::mar; // use March 1 instead of February 29
    d = 1;
    }
    y+=n;
}
// helper functions:
bool is_date(int y, Month m, int d)
{
    // assume that y is valid
    if (d<=0) return false; // d must be positive
    if (m<Month::jan || Month::dec<m) return false;
    int days_in_month = 31; // most months have 31 days
    switch (m) {
    case Month::feb: // the length of February varies
    days_in_month = (leapyear(y))?29:28;
    break;
    case Month::apr: case Month::jun: case Month::sep: case Month::nov:
    days_in_month = 30; // the rest have 30 days
    break;
    }
    if (days_in_month<d) return false;
    return true;
}
bool leapyear(int y)
{
    // TODO: need to test
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return true;
    return false;
}
bool operator==(const Date& a, const Date& b)
{
    return a.year()==b.year()
    && a.month()==b.month() && a.day()==b.day();
}
bool operator!=(const Date& a, const Date& b)
{
    return !(a==b);
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
    << ',' << static_cast<int>(d.month())
    << ',' << d.day() << ')';
}
istream& operator>>(istream& is, Date& dd)
{
     int y, m, d;
     char ch1, ch2, ch3, ch4;
     is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
     if (!is) return is;
     if (ch1!= '(' || ch2!=',' || ch3!=',' || ch4!=')') { // oops: format error
     is.clear(ios_base::failbit); // set the fail bit
     return is;
     }
     dd = Date(y, Month(m),d); // update dd
     return is;
}
enum class Day {
    // sunday = 0
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

Day get_day(int n) 
{
    switch (n) {
    case 0: { return Day::sunday; break; }
    case 1: { return Day::monday; break; }
    case 2: { return Day::tuesday; break; }
    case 3: { return Day::wednesday; break; }
    case 4: { return Day::thursday; break; }
    case 5: { return Day::friday; break; }
    case 6: { return Day::saturday; break; }
    default: { error("Out of range 0-6"); }
    }
}

Day year_doomsday(const Date& d)
{
    // Doomsday Algorithm
    // finds the century anchor
    // century anchor week number
    int r = static_cast<int>(floor(d.year()/100)) % 4;
    int ca_num = 5 * r % 7 + static_cast<int>(Day::tuesday);
    Day century_anchor = get_day(ca_num);
    // get year anchor
    int y = d.year() % 100;      // year two first digits
    const int months = 12;
    int a = static_cast<int>(floor(y/months));
    int b = y % months;
    int c = static_cast<int>(floor((y % months) / 4));
    int year_anchor_num = (a + b + c) % 7 + ca_num;
    Day year_anchor_day = get_day(year_anchor_num % 7);
    return year_anchor_day;
}

Day day_of_week(const Date& d)
{
    Day doomsday = year_doomsday(d);
    // month look-up table
    vector<int> month_days_lt = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapyear(d.year())) month_days_lt[1] = 29;
    int day_dist = 0;
    
    if (d.month()>Month::feb) {
        int month_dist = abs(static_cast<int>(Month::feb) - static_cast<int>(d.month())) - 1;
        for (int i = 0; i < month_dist; ++i) {
            day_dist += month_days_lt[i + 2];
        }
        day_dist += d.day();
    }
    else if (d.month() == Month::feb) {
        int day_diff = abs(d.day() - static_cast<int>(d.month()));
        day_dist += day_diff;
    }
    else {
        // if is january
        day_dist += static_cast<int>(Month::jan);
        int day_diff = abs(d.day() - static_cast<int>(d.month()));
        day_dist += day_diff;
    }
    return get_day((static_cast<int>(doomsday) + day_dist) % 7 );
}
Date next_Sunday(const Date& d)
{
    // ...
}
Date next_weekday(const Date& d)
{
    // . . .
}

Day next_workday(const Date& d)
{
    int d_dayofweek = static_cast<int>(day_of_week(d));
    
    
}

int week_of_year(const Date& d)
{
    // TODO: implement
}
} // Chrono

int main()
{
    Chrono::Date today{2020, Chrono::Month::nov, 2};
    today.add_month(13);
    cout << today;
}