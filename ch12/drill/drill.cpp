#include "../GUI_interface/Simple_window.h"     // get access to our windows library
#include "../GUI_interface/Graph.h"             // get access to our graphics library facilities

int main()
{
// first example
    using namespace Graph_lib;      // out graphics facilities are in Graph_lib
    
    Graph_lib::Point tl{100, 100};  // to become top left corner of window
    Simple_window win{tl, 600, 400, "Canvas"};  // make a simple window
    win.wait_for_button();                  // give control to the display engine
    
    Graph_lib::Polygon poly;                // make a shape (a polygon)
    poly.add(Graph_lib::Point{300, 200});   // add a point
    poly.add(Graph_lib::Point{350, 100});   // add another point
    poly.add(Graph_lib::Point{400, 200});   // add a third point
    poly.set_color(Graph_lib::Color::red);  // adjust  properties of poly
    win.attach(poly);                       // connect poly to the window
    win.wait_for_button();                  // give control to the display engine
    
    // Axis
    Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};    // make an Axis
            // an Axis is a kind of Shape
            // Axis::x means horizontal
            // starting at (20, 300)
            // 280 pixels long
            // 10 "notches"
            // label the axis "x axis"
    win.attach(xa);                 // attach xa to the window, win
    win.set_label("Canvas #2");     // relabel the window
    win.wait_for_button();          // display!
    Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
    ya.set_color(Color::cyan);      // choose a color
    ya.label.set_color(Color::dark_red);    // choose a color for the text
    win.attach(ya);
    win.set_label("Canvas #3");
    win.wait_for_button();          // display!
    
    // A Graphing a function
    Function sine{sin, 0, 100, Point{20, 150}, 1000, 50, 50};   // sine curve
        // plot sin() in the range [0:100] with (0, 0), at (20, 150)
        // using 1000 points; scale x values * 50, scale y values * 50
    win.attach(sine);
    win.set_label("Canvas #4");
    win.wait_for_button();
    
    // Polygons
    sine.set_color(Color::blue);    // we changed our mind about sine's color
    Graph_lib::Polygon poly2;       // a polygon; a Polygon is a kind of Shape
    poly2.add(Point{300, 200});
    poly2.add(Point{350, 100});
    poly2.add(Point{400, 200});
    
    poly2.set_color(Color::red);
    poly2.set_style(Line_style::dash);
    win.attach(poly2);
    win.set_label("Canvas #5");
    win.wait_for_button();
    
    // Rectangles
    Graph_lib::Rectangle r{Point{200, 200}, 100, 50};   // top left corner, width, height
    win.attach(r);
    win.set_label("Canvas #6");
    win.wait_for_button();
    
    Graph_lib::Closed_polyline poly_rect;
    poly_rect.add(Point{100, 50});
    poly_rect.add(Point{200, 50});
    poly_rect.add(Point{100, 100});
    poly_rect.add(Point{100, 100});
    // poly_rect is a rectangle, however, the poly_rect object in memory is not a Rectangle
    poly_rect.add(Point{50, 75});
    win.attach(poly_rect);
    
    // Fill
    r.set_fill_color(Color::yellow);    // color the inside of the rectangle
    poly.set_style(Line_style(Line_style::dash, 4));
    poly_rect.set_style(Line_style(Line_style::dash, 2));
    poly_rect.set_fill_color(Color::green);
    win.set_label("Canvas #7");
    win.wait_for_button();
    
    // Text
    Graph_lib::Text t{Point{150, 150}, "Hello, graphical world!"};
    win.attach(t);
    win.set_label("Canvas #8");
    win.wait_for_button();
    
    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.set_label("Canvas #9");
    win.wait_for_button();
    
    // Images
    Graph_lib::Image ii{Point{100, 50}, "..\\IMG_20210322_181623.jpg"};    // 400 * 212-pixel.jpg
    win.attach(ii);
    win.set_label("Canvas #10");
    win.wait_for_button();
    
    ii.move(100, 200);
    win.set_label("Canvas #11");
    win.wait_for_button();
    
    // and much more
    Graph_lib::Circle c{Point{100, 200}, 50};
    Graph_lib::Ellipse e{Point{100, 200}, 75, 25};
    e.set_color(Color::dark_red);
    Graph_lib::Mark m{Point{100, 200}, 'x'};
    
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
        << "; window size: " << win.x_max() << "*" << win.y_max();
    Graph_lib::Text sizes{Point{100, 20}, oss.str()};
    Graph_lib::Image ii2{Point{225, 225}, "..\\IMG_20210322_181643.jpg"};  // -> todo image
    ii2.set_mask(Point{40, 40}, 200, 150);    // display center part of image
    win.attach(c);
    win.attach(e);
    win.attach(m);
    
    win.attach(sizes);
    win.attach(ii2);
    win.set_label("Canvas #12");
    win.wait_for_button();
}