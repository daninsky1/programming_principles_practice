// exercise 7
// page 149
// simple calculator that takes single-digit number written as either digits
// or spelled out
#include "../../std_lib_facilities.h"

int main()
{
    double a = -1, b = -1;
    string str_a, str_b;
    char operation = ' ';

    vector<string> l_numbers = { "zero", "one", "two", "three", "four",
                                 "five", "six", "seven", "eight", "nine" };

    cout << "Enter two single-digit values and choose one of the four operations(+ - / *): ";

    while (cin >> str_a >> str_b >> operation) {
        for (int i = 0; i < l_numbers.size(); ++i) {
            if (str_a == l_numbers[i] || str_a == to_string(i))
                a = i;
            if (str_b == l_numbers[i] || str_b == to_string(i))
                b = i;
        }

        if (operation == '+')
            cout << "The sum of " << a << " and " << b << " is: " << a + b << '\n';
        else if (operation == '-')
            cout << "The subtraction of " << a << " and " << b << " is: " << a - b << '\n';
        else if (operation == '*')
            cout << "The product of " << a << " and " << b << " is: " << a * b << '\n';
        else if (operation == '/')
            cout << "The division of " << a << " and " << b << " is: " << a / b << '\n';
        else
            cout << "Error, unknown operation?!" << '\n';
    }
}