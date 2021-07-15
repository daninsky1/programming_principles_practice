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

vector<Point> superelli_points(double a, double b, double m, double n, int win_width, int win_height)
{
    a *= 100;
    b *= 100;
    vector<Point> pts;
    for (double angle = 0; angle < 2*M_PI; angle += 0.1) {
        // superellipse
        double na = 2 / n;
        double sex = pow(abs(cos(angle)), 2 / m) * a * sgn(cos(angle));
        double sey = pow(abs(sin(angle)), 2 / n) * a * sgn(sin(angle));
        Point sep{static_cast<int>(sex)+win_width/2, static_cast<int>(sey)+win_height/2};
        pts.push_back(sep);
    }
    return pts;    
}

void do_circle(int win_width, int win_height, Simple_window win)
{
    // circle
    Graph_lib::Closed_polyline circle;
    circle.set_style(Line_style(Line_style::solid, 6));
    
    double r = 260;
    for (double a = 0; a < 2*M_PI; a += 10) {
        double x = r * cos(a);
        double y = r * sin(a);
        // cout << "x: " << x << ", y: " << y << "\n";
        Point p{static_cast<int>(x)+win_width/2, static_cast<int>(y)+win_height/2};
        // cout << "x: " << p.x << ", y: " << p.y << "\n";
        circle.add(p);
    }
    win.attach(circle);
}

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 1000;
    int win_height = 800;
    string win_name = "Exercise 1";
    Simple_window win{tl, win_width, win_height, win_name};
    
    // superellipse
    Graph_lib::Open_polyline superellipse;
    superellipse.set_color(Color::black);
    // superellipse.set_fill_color(Color::white);
    double a = 20;
    double b = a;
    double m = 4;
    double n = m;
    vector<Point> se_points = superelli_points(a, b, m, n, win_width, win_height);
    for (const Point p : se_points) {
        superellipse.add(p);
    }
    int N = se_points.size();
    vector<Line*> lines;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            Graph_lib::Line* line = new Graph_lib::Line{se_points[i], se_points[j]};
            line->set_style(Line_style::solid);
            line->set_color(Color::red);
            lines.push_back(line);
        }
    }
    for (int i = 0; i < lines.size(); ++i) {
        win.attach(*lines[i]);
    }
    // win.attach(superellipse);
    
    // display
    win.wait_for_button();
}

    // for (double angle = 0; angle < 2*M_PI; angle += 0.1) {
    //     // superellipse
    //     double na = 2 / n;
    //     double sex = pow(abs(cos(angle)), 2 / m) * a * sgn(cos(angle));
    //     double sey = pow(abs(sin(angle)), 2 / n) * a * sgn(sin(angle));
    //     Point sep{static_cast<int>(sex)+win_width/2, static_cast<int>(sey)+win_height/2};
    //     superellipse.add(sep);
    // }
    // win.attach(superellipse);
    
    // // star
    // Graph_lib::Closed_polyline star;
    // star.set_style(Line_style(Line_style::solid, 6));
    // star.set_color(Color::black);
    // star.set_fill_color(Color::red);
    // for (double angle = 0; angle < 2*M_PI; angle += 2*M_PI/N) {
    //     // inner circle points
    //     double cx = r * cos(angle+offset);
    //     double cy = r * sin(angle+offset);
    //     Point cp{static_cast<int>(cx)+win_width/2, static_cast<int>(cy)+win_height/2};
    //     cout << "circle: x: " << cp.x << ", y: " << cp.y << "\n";
    //     star.add(cp);
        
    //     // superellipse
    //     double na = 2 / n;
    //     double stx = pow(abs(cos(angle)), 2 / m) * a * sgn(cos(angle));
    //     double sty = pow(abs(sin(angle)), 2 / n) * a * sgn(sin(angle));
    //     Point stp{static_cast<int>(stx)+win_width/2, static_cast<int>(sty)+win_height/2};
    //     cout << "se: x: " << stp.x << ", y: " << stp.y << "\n";
    //     star.add(stp);
    // }
    // win.attach(star);