#include "../../std_lib_facilities.h"

enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date {
public:
    Date(int yy, Month mm, int dd);
    Month month() const { return m; }     // const member: can't modify the object
    int day() const { return d; }         // const member: can't modify the object
    int year() const { return y; }        // const member: can't modify the object
    void add_day(int n);    // non-const member: can modify the object
    void add_month(int n);  // non-const member: can modify the object
    void add_year(int m);   // non-const member: can modify the object
private:
    int y;                  // year
    Month m;
    int d;                  // day of month
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

ostream& operator<<(ostream& os, const Date& d)
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