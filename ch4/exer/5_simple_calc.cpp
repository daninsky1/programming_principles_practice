// exercise 5
// page 149
#include "../../std_lib_facilities.h"

int main()
{
    double a, b;
    string operation = "";

    cout << "Enter two values and choose one of the four operations(+ - / *)";
    cin.ignore();

    while (cin >> a >> b >> operation) {
        if (operation == "+")
            cout << "The sum of " << a << " and " << b << "is: " << a + b << '\n';
        else if (operation == "-")
            cout << "The subtraction of " << a << " and " << b << "is: " << a - b << '\n';
        else if (operation == "*")
            cout << "The product of " << a << " and " << b << "is: " << a * b << '\n';
        else if (operation == "/")
            cout << "The division of " << a << " and " << b << "is: " << a / b << '\n';
        else
            cout << "Error, unknown operation?!" << '\n';
    }
}