// page 115
// exercise 5
// enter 2 integers numbers
#include "../../std_lib_facilities.h"

int main()
{
    int number1;
    int number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    if (number1 > number2)
        cout << "\nnumber1 is larger."
        << "\nnumber2 is smaller.";
    if (number1 < number2)
        cout << "\nnumber1 is smaller."
        << "\nnumber2 is larger.";
    if (number1 == number2)
        cout << "\nnumber1 and number2 are the same size.";
    cout << "\nsum: " << number1 + number2;
    cout << "\ndifference: " << number1 - number2;
    cout << "\nproduct: " << number1 * number2;
    cout << "\nratio: " << number1 << ":" << number2 << "\n";
}