#include "Simple_window.h"
#include "Graph.h"
#include "../../std_lib_facilities.h"

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 800;
    int win_height = 600;
    string win_name = "Exercise 1";
    Simple_window win{tl, win_width, win_height, win_name};
    
    // circle
    int ring_sz = 80;
    int ring_xdist = ring_sz*2 + 20;
    int ring_ydist = ring_sz;
    int ring_stroke_sz = 10;
    Graph_lib::Circle c1{Point{150, 150}, ring_sz};
    c1.set_style(Line_style(Line_style::solid, ring_stroke_sz));
    c1.set_color(Color::blue);
    win.attach(c1);
    
    Graph_lib::Circle c2{Point{150+ring_xdist, 150}, ring_sz};
    c2.set_style(Line_style(Line_style::solid, ring_stroke_sz));
    c2.set_color(Color::black);
    win.attach(c2);
    
    Graph_lib::Circle c3{Point{150+ring_xdist*2, 150}, ring_sz};
    c3.set_style(Line_style(Line_style::solid, ring_stroke_sz));
    c3.set_color(Color::red);
    win.attach(c3);
    
    Graph_lib::Circle c4{Point{150+ring_xdist/2+ring_xdist, 150+ring_ydist}, 80};
    c4.set_style(Line_style(Line_style::solid, ring_stroke_sz));
    c4.set_color(Color::yellow);
    win.attach(c4);
    
    Graph_lib::Circle c5{Point{150+ring_xdist/2, 150+ring_ydist}, 80};
    c5.set_style(Line_style(Line_style::solid, ring_stroke_sz));
    c5.set_color(Color::green);
    win.attach(c5);
    
    // display
    win.wait_for_button();
}