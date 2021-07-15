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
    int rect_szy = 100;
    Graph_lib::Rectangle rect_1{Point{100, 100}, rect_szx, rect_szy};
    rect_1.set_color(Color::invisible);
    rect_1.set_fill_color(Color::white);
    win.attach(rect_1);
    Graph_lib::Rectangle rect_2{Point{100*2, 100}, rect_szx, rect_szy};
    win.attach(rect_2);
    rect_2.set_color(Color::invisible);
    rect_2.set_fill_color(Color::red);
    Graph_lib::Rectangle rect_3{Point{100*3, 100}, rect_szx, rect_szy};
    rect_3.set_color(Color::invisible);
    rect_3.set_fill_color(Color::white);
    win.attach(rect_3);
    
    Graph_lib::Rectangle rect_4{Point{100, 100*2}, rect_szx, rect_szy};
    rect_4.set_color(Color::invisible);
    rect_4.set_fill_color(Color::red);
    win.attach(rect_4);
    Graph_lib::Rectangle rect_5{Point{100*2, 100*2}, rect_szx, rect_szy};
    rect_5.set_color(Color::invisible);
    rect_5.set_fill_color(Color::white);
    win.attach(rect_5);
    Graph_lib::Rectangle rect_6{Point{100*3, 100*2}, rect_szx, rect_szy};
    rect_6.set_color(Color::invisible);
    rect_6.set_fill_color(Color::red);
    win.attach(rect_6);
    
    Graph_lib::Rectangle rect_7{Point{100, 100*3}, rect_szx, rect_szy};
    rect_7.set_color(Color::invisible);
    rect_7.set_fill_color(Color::white);
    win.attach(rect_7);
    Graph_lib::Rectangle rect_8{Point{100*2, 100*3}, rect_szx, rect_szy};
    rect_8.set_color(Color::invisible);
    rect_8.set_fill_color(Color::red);
    win.attach(rect_8);
    Graph_lib::Rectangle rect_9{Point{100*3, 100*3}, rect_szx, rect_szy};
    rect_9.set_color(Color::invisible);
    rect_9.set_fill_color(Color::white);
    win.attach(rect_9);
    
    
    // display
    win.wait_for_button();
}