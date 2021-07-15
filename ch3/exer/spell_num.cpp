// page 116
// exercise 9
// spell numbers
// if the user enter a digit and the program spells the digit, and if the 
// user inputs a spelled number the program output its digit.
#include "../../std_lib_facilities.h"

int main()
{
    string number;
    cout << "Enter a number: ";
    cin >> number;
    if (number == "one")
        cout << "1";
    else if (number == "two")
        cout << "2";
    else if (number == "three")
        cout << "3";
    else if (number == "four")
        cout << "4";
    else if (number == "1")
        cout << "one";
    else if (number == "2")
        cout << "two";
    else if (number == "3")
        cout << "three";
    else if (number == "4")
        cout << "four";
    else
        cout << "Not a number I know.";
}