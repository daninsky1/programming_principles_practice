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
    
    // rectangle that doesn't fit the window
    int rect_szx = 900;
    int rect_szy = 700;
    Graph_lib::Rectangle rect_1{Point{100, 100}, rect_szx, rect_szy};
    rect_1.set_color(Color::invisible);
    rect_1.set_fill_color(Color::white);
    win.attach(rect_1);
    
    // display
    win.wait_for_button();
    
    // window that doesn't fit the Full HD screen
    win.resize(3000, 2000);
    win.wait_for_button();
}