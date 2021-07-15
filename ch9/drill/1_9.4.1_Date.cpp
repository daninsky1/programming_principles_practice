#include "../../std_lib_facilities.h"

// simple Date
struct Date {
    int y;      // year
    int m;      // month in year
    int d;      // day of the month
};

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

Date add_day(Date d)
{
    d.d = (d.d == 31) ? 1 : d.d += 1;
    return d;
}

bool is_valid(Date &d)
{
    if (d.d <= 0 || d.d > 31) return false;
    if (d.m <= 0 || d.m > 12) return false;
    if (d.m < 0) return false;
    return true;
}

int main()
{
    Date today; // a Date variable (a named objet)
    today.y = 1978;
    today.m = 6;
    today.d = 25;
    cout << today << '\n';
    cout << is_valid(today) << '\n';
    
    Date invalid_date;
    invalid_date.d = -1;
    invalid_date.m = 13;
    invalid_date.y = 1978;
    cout << invalid_date << '\n';
    cout << is_valid(invalid_date) << '\n';

    Date tomorrow = add_day(today);
    cout << tomorrow << '\n';
    cout << is_valid(tomorrow) << '\n';
}