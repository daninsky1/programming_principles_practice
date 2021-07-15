// page 195
// exercise 3
// covert celsius to kelvin
#include "../../std_lib_facilities.h"

double ctok(double c)
{
    int k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;                           // declare input variable
    cin >> c;                               // retrieve temperature to input variable
    if (c < -273.15)                        // error checking
        error("celsius bellow 273.15");
    double k = ctok(c);                     // convert temperature
    cout << k << '\n';                      // print out temperature
}