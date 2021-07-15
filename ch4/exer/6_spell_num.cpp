// exercise 6
// page149
#include "../../std_lib_facilities.h"

int main()
{
    string number;
    bool flag = 1;

    vector<string> l_numbers = { "zero", "one", "two", "three", "four",
                                 "five", "six", "seven", "eight", "nine" };

    cout << "Enter a number: ";
    while (cin >> number) {
        flag = true;
        for (int i = 0; i < l_numbers.size(); ++i)
        {
            if (number == l_numbers[i]) {
                cout << i << '\n';
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < l_numbers.size(); ++i)
        {
            if (number == l_numbers[i]) {
                cout << l_numbers[i] << '\n';
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "Error, unknown number\n";
        }
        cout << "Enter a number: ";
    }
}