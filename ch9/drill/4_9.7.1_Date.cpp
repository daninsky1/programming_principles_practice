#include "../../std_lib_facilities.h"

enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

// simple Date (use Month type)
class Date {
public:
    Date(int yy, Month mm, int dd);  // check for valid date and initialize
    void add_day(int n);        // increase the Date by n days
    Month month() { return m; }
    int day() { return d; }
    int year() { return y; }
private:
    int y;                // year
    Month m;
    int d;                // day
    
};

Date::Date(int yy, Month mm, int dd)
{
    if (dd <= 0 || dd > 31) error("invalid day");
    if (int(mm) <= 0 || int(mm) > 12) error("invalid month");
    if (yy < 0) error("invalid day");
    y = yy;
    m = mm;
    d = dd;
}

void Date::add_day(int n)
{
    d = (d == 31) ? n : d += n;
}

ostream& operator<<(ostream& os, Date& d)
{
    return os << '(' << d.year()
              << ',' << int(d.month())
              << ',' << d.day() << ')';
}

int main()
{
    Date today{1978, Month::jun, 25}; // a Date variable (a named objet)
    cout << today << '\n';
    
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << tomorrow << '\n';
    
    // // compilation error invalid date
    // Date invalid_date{1978, 13, -1};
    // cout << invalid_date << '\n';
}