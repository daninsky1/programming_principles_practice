// page 149
// exercise 8 and 9
// chess reward
#include "../../std_lib_facilities.h"

int main()
{
    double f_grains = 0.0;
    int i_grains = 0;
    int chess_squares = 64;

    for (int i = 0; i < chess_squares; ++i) {
        if (!i_grains) {
            ++i_grains;
            ++f_grains;
        }
        i_grains += i_grains;
        f_grains += f_grains;
        cout << i + 1 << '\t' << i_grains << '\t' << f_grains << '\n';
    }
    /*
    What is the largest number of squares for which you can calculate the approximate number of grains(using a double) and (using a int) ?:
    int = 1073741824
    double = 1.84467e+19

    10 = 1024
    20 = 1048576
    30 = 1073741824
    */
}