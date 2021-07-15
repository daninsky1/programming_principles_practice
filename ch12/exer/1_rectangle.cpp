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
    
    // rectangle 2
    Point rect_pos{100, 100};
    Simple_window win{tl, win_width, win_height, win_name};
    int rect_x = 300;
    int rect_y = 150;
    Graph_lib::Rectangle rect{rect_pos, rect_x, rect_y};
    win.attach(rect);
    
    // rectangle 2
    int poly_fpoint_x = rect_pos.x + rect_x;
    int poly_fpoint_y = rect_pos.y + rect_y;
    
    Graph_lib::Polygon poly_rect;
    poly_rect.add(Point{poly_fpoint_x, poly_fpoint_y});
    poly_rect.add(Point{poly_fpoint_x + rect_x, poly_fpoint_y});
    poly_rect.add(Point{poly_fpoint_x + rect_x, poly_fpoint_y + rect_y});
    poly_rect.add(Point{poly_fpoint_x, poly_fpoint_y + rect_y});
    win.attach(poly_rect);
    
    // display
    win.wait_for_button();
}