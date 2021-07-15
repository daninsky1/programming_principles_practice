// page 116
// exercise 10
// calculate 2 operands
#include "../../std_lib_facilities.h"

int main()
{
    string operation;
    double num1;
    double num2;
    cout << "Enter a operator followed by two numbers, put a space to each statement: ";
    cin >> operation >> num1 >> num2;
    if (operation == "+") {
        cout << num1 + num2;
    }
    if (operation == "-") {
        cout << num1 - num2;
    }
    if (operation == "*") {
        cout << num1 * num2;
    }
    if (operation == "/") {
        cout << num1 / num2;
    }
}