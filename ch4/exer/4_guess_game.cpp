// exercise 4
// page 149
// number guessing game
#include "../../std_lib_facilities.h"

int main()
{
    char input = 0;
    int num = 0;
    int num_factor = 100;
    int selection_min = 0;
    int selection_max = 100;

    cout << "Think a number between 1 and 100, and I will try to guess, OK?\nPress enter to continue." << '\n';
    cin.ignore();

    int i = 0;
    while (i < 7) {
        num_factor = (selection_max - selection_min) / 2;
        num = selection_min + num_factor;

        cout << "Is the number you are thinking is less than " << num << ". y for yes, n for no." << '\n';
        cin >> input;
        if (input == 'y') {
            num_factor /= 2;
            selection_max = num;
            ++i;
        }
        else if (input == 'n') {
            num_factor /= 2;
            selection_min = num;
            ++i;
        }
        else {
            cout << "Error.";
        }
    }

    num_factor = (selection_max - selection_min) / 2;
    num = selection_min + num_factor;

    cout << "The number is: " << num << '\n';
}