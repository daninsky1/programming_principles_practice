#define _USE_MATH_DEFINES
#include "Simple_window.h"
#include "Graph.h"
#include "../../std_lib_facilities.h"

double sgn(double val)
{
    if (val > 0) return 1;
    else if (val < 0) return -1;
    else return 0;
}

Graph_lib::Closed_polyline superellipse(double a, double b, double m, double n, double N)
{
    // n, a, b > 0
    Graph_lib::Closed_polyline se;
    double x = 0.0;
    double y = 0.0;
    
    for (double a = 0; a < 2 * M_PI; a += 0.1) {
        x = pow(abs(cos(a)), 2 / m) * a * sgn(cos(a));
        y = pow(abs(sin(a)), 2 / n) * a * sgn(sin(a));
        Point p{static_cast<int>(x), static_cast<int>(y)};
        cout << "x: " << x << ", y: " << "\n";
        se.add(p);
    }
}

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 800;
    int win_height = 600;
    string win_name = "Exercise 1";
    Simple_window win{tl, win_width, win_height, win_name};
    double a = 100;
    double b = 100;
    double m = 2;
    double n = m;
    double N = 0.0;
    // superellipse
    Graph_lib::Closed_polyline se = superellipse(a, b, m, n, N);
    
    // display
    win.wait_for_button();
}