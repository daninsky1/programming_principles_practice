// page 195
// exercise 4
// converts Ceuldius to Kelvin
#include "../../std_lib_facilities.h"

double ctok(double c)
{
    if (c < -273.15)
        error("celsius bellow 273.15");
    int k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;               // declare input variable
    cin >> c;                   // retrieve temperature to input variable
    double k = ctok(c);         // convert temperature
    cout << k << '\n';          // print out temperature
}