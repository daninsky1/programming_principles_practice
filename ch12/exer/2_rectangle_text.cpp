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
    
    // rectangle 2
    int rect_szx = 100;
    int rect_szy = 30;
    int rect_x_center = win_width/2-rect_szx/2;
    int rect_y_center = win_height/2-rect_szy/2;
    Point rect_pos{rect_x_center, rect_y_center};
    Graph_lib::Rectangle rect{rect_pos, rect_szx, rect_szy};
    win.attach(rect);
    
    // Text
    string msg = "Howdy!";
    Graph_lib::Text tt{Point{rect_x_center+20, rect_y_center+20}, msg};    
    win.attach(tt);
    
    // display
    win.wait_for_button();
}