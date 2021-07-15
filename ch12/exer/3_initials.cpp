#include "Simple_window.h"
#include "Graph.h"
#include "../../std_lib_facilities.h"

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 800;
    int win_height = 600;
    string win_name = "Exercise 3";
    Simple_window win{tl, win_width, win_height, win_name};
    
    // lines 'D'
    Graph_lib::Open_polyline d;
    d.add(Point{100, 100});
    d.add(Point{180, 150});
    d.add(Point{180, 200});
    d.add(Point{100, 250});
    d.add(Point{100, 100});
    d.set_style(Line_style(Line_style::solid, 5));
    win.attach(d);
    
    // lines 'A'
    Graph_lib::Open_polyline a;
    a.add(Point{200, 250});
    a.add(Point{240, 100});
    a.add(Point{280, 250});
    a.set_style(Line_style(Line_style::solid, 5));
    a.set_color(Color::red);
    win.attach(a);
    
    // lines 'A'
    Graph_lib::Open_polyline n;
    n.add(Point{300, 250});
    n.add(Point{300, 100});
    n.add(Point{380, 250});
    n.add(Point{380, 100});
    n.set_style(Line_style(Line_style::solid, 5));
    n.set_color(Color::blue);
    win.attach(n);
    
    // display
    win.wait_for_button();
}