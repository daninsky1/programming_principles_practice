// page 116
// exercise 8
// tells the user if his input number is odd or ever
#include "../../std_lib_facilities.h"

int main()
{
    int number;
    cout << "Enter a integer number: ";
    cin >> number;
    if (number % 2)
        cout << "The value " << number << " is an odd number.\n";
    else
        cout << "The value " << number << " is an even number.\n";
}