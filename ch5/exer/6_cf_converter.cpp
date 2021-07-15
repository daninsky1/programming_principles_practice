//page 195
// exercise 6
// converts Celsius to Fahrenheit, and Fahrenheit to Celsius
#include "../../std_lib_facilities.h"

double ctof(double c)
{
    double f = c * 9.0 / 5 + 32;
    return f;
}

double ftoc(double f)
{
    double c = (f - 32) * 5 / 9.0;
    return c;
}

int main()
{

}