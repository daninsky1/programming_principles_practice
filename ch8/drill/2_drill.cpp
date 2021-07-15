#include "../../std_lib_facilities.h"
// #pragma clang diagnostic ignored "-Wliteral-conversion"

void swap_v(int a, int b)
{
    cout << "swap_v: a = " << a << " b = " << b << '\n';
    int temp;
    temp = a, a = b;
    b = temp;
    cout << "result: a = " << a << " b = " << b << '\n';
}

void swap_r(int &a, int &b)
{
    cout << "swap_v: a = " << a << " b = " << b << '\n';
    int temp;
    temp = a, a = b;
    b = temp;
    cout << "result: a = " << a << " b = " << b << '\n';
}

// swap_cr(const int&, const int&) doesn't compile because its body
//assign a to b, and b to temp, const-reference cannot be assigned.
// void swap_cr(const int &a, const int &b)
// {
//     int temp;
//     temp = a, a = b;
//     b = temp;
// }

int main()
{
    int x = 7;
    int y = 9;
    swap_r(x, y);
    swap_v(7, 9);
    const int cx = 7;
    const int cy = 9;
    swap_v(cx, cy);
    swap_v(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    // swap_r(dx, dy);     // error: no matching function for call to swap_r(double&, double&)
    swap_v(7.7, 9.9);      // implicit narrowing conversion double to int
}