#include "Simple_window.h"
#include "Graph.h"
#include "../../std_lib_facilities.h"
// #include "Fl_Image"

int main()
{
    // window
    Point tl{100, 100};
    int win_width = 800;
    int win_height = 600;
    string win_name = "Exercise 9";
    Simple_window win{tl, win_width, win_height, win_name};
    
    Point anchor{100, 100};
    // inner title
    Graph_lib::Text t{anchor, "Daniel e Marina!"};
    t.set_color(Color::black);
    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.attach(t);
    
    // friend image
    anchor.y += 20;
    string img_path = "";
    Graph_lib::Image img{anchor, "../IMG_20210322_181643.jpg"};
    win.attach(img);
    
    // display
    win.wait_for_button();
}