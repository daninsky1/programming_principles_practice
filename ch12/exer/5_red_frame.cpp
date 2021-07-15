#include "Simple_window.h"
#include "Graph.h"
#include "../../std_lib_facilities.h"

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 1900;
    int win_height = 1000;
    string win_name = "Exercise 1";
    Simple_window win{tl, win_width, win_height, win_name};
    
    // rectangle 2
    int rect_szx = 1280;
    int rect_szy = 810;
    Graph_lib::Rectangle rect_1{Point{100, 100}, rect_szx, rect_szy};
    rect_1.set_style(Line_style{Line_style::solid, 20});
    rect_1.set_color(Color::red);
    rect_1.set_fill_color(Color::white);
    win.attach(rect_1);
    
    // display
    win.wait_for_button();
}