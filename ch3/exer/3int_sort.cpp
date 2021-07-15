// page 115
// exercise 6
// 3 integer sort
#include "../../std_lib_facilities.h"

int main()
{
    int num1;
    int num2;
    int num3;
    int buffer;
    cout << "Enter 3 integer numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        buffer = num1;
        num1 = num2;
        num2 = buffer;
    }
    if (num2 > num3) {
        buffer = num2;
        num2 = num3;
        num3 = buffer;
    }
    if (num1 > num2) {
        buffer = num1;
        num1 = num2;
        num2 = buffer;
    }
    cout << num1 << ", " << num2 << ", " << num3 << ".\n";
}