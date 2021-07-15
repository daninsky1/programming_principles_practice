// exercise 1
// page 195
#include "../../std_lib_facilities.h"

int area(int length, int width)
{
    return length * width;
}

int framed_area(int x, int y)
{
    return area(x - 2, y - 2);
}

constexpr int frame_width = 2;  // eliminate magic constant
int framed_area2(int x, int y)
{
    return area(x - frame_width, y - frame_width);
}

/*
void syntax_errors()
{
    page 157
    try this
    page 158
    int s1 = area(7;    // error: ) missing
    int s1 = area(7)    // error: ; missing
    Int s1 = area(7);    // error: Int is not a type
    int s1 = area('7);    // error: non-ternubated character (' missing)
}
*/

/*
void type_errors()
{
    page 158
    try this
    page 159
    int x0 = arena(7);      // error: undeclared function
    int x1 = area(7);       // error: wrong number of arguments
    int x2 = area("seven")  // error: 1st argument has aa wrong type
}
*/

void f(int x, int y, int z)
{
    // page 167
    // try this
    int area1 = area(x, y);
    if (area1 <= 0) error("non-positive area");
    int area2 = framed_area2(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area2) / area3;
}

void temperatures_v2(vector<double> temps)
{
    // page 177
    // try this
    // page 178

    for (double temp; cin >> temp;)         // read and put into temps
        temps.push_back(temp);

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;

    for (int x : temps) {
        if (x > high_temp) high_temp = x;   // find high
        if (x < low_temp) low_temp = x;     // find low
        sum += x;
    }

    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum / temps.size() << '\n';

}

void temperatures_v3(vector<double> temps)
{
    // page 178
    // try this

    constexpr double impossibly_high = 1000;    // initialize to impossibly high
    constexpr double impossibly_low = -1000;    // initialize to impossibly low
    double sum = 0;
    double high_temp = impossibly_high;
    double low_temp = impossibly_low;
    int no_of_temps = 0;

    for (double temp; cin >> temp;) {   // read temp
        ++no_of_temps;                  // count temperatures
        sum += temp;                    // compute sum
        if (temp > high_temp) high_temp = temp;   // find high
        if (temp < low_temp) low_temp = temp;     // find low
    }

    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum / temps.size() << '\n';
}

void break_area()
{
    // try this
    // find a pair of values do that the pre-condition of this
    // version of area holds, but the post-condition doesn't

}

int main()
{
    
}