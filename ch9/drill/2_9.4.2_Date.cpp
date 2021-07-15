#include "../../std_lib_facilities.h"
// simple Date
// guarantee initialization with constructor
// provide some notational convenience
struct Date {
    int y, m, d;                // year, month, day
    Date(int yy, int mm, int dd);  // check for valid date and initialize
    void add_day(int n);        // increase the Date by n days
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

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
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