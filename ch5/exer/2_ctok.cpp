// page 195
// exercise 2
// converts Ceuldius to Kelvin
#include "../../std_lib_facilities.h"

double ctok(double c)
{
    int k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;               // declare input variable
    cin >> c;                   // retrieve temperature to input variable
    double k = ctok(c);       // convert temperature
    cout << k << '\n';          // print out temperature
}