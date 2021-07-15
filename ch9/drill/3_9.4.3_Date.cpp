#include "../../std_lib_facilities.h"

// simple Date (control access)
class Date {
    int y, m, d;                // year, month, day
public:
    Date(int y, int m, int d);  // check for valid date and initialize
    void add_day(int n);        // increase the Date by n days
    int month() { return m; }
    int day() { return d; }
    int year() { return y; }
};

Date::Date(int yy, int mm, int dd)
{
    if (dd <= 0 || dd > 31) error("invalid day");
    if (mm <= 0 || mm > 12) error("invalid month");
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
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
{
    Date today{1978, 6, 25}; // a Date variable (a named objet)
    cout << today << '\n';
    
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << tomorrow << '\n';
    
    // program stops with an error here
    Date invalid_date{1978, 13, -1};
    cout << invalid_date << '\n';
}