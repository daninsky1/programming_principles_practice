// page 195
// exercise 5
// converts Celsius to Kelvin and Kelvin to Celsius
#include "../../std_lib_facilities.h"
// TODO: program not finished
double ktoc(double k)
{
    double c = k - 273.15;
    return c;
}

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