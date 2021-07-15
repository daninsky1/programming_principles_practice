// exercise 13
// bulls and cows game
/*
Try to guess 4 number serie. Enter the 4 number, if the guess number exist in the
sequence but out of order is equal to 1 cow, if the guess number exist in the
right place is equal to 1 bull. Find all 4 bulls
*/
// TODO: restore the 13 exercise
#include "../../std_lib_facilities.h"

int main()
{
    vector<int> numbers = { 1, 2, 3, 4 };
    vector<int> g_numbers(4, 0);
    vector<int> result;
    string n;
    int cows;
    int bulls;
    cout << "Guess four one digit numbers, with no spaces\n";

    while (true) {
        cin >> n;
        result = vector<int>(4, 0);
        cows = 0;
        bulls = 0;
        if (n.size() != 4) {
            cout << "You need put for digits, not " << n.size() << '\n';
            break;
        }
        for (int i = 0; i < n.size(); ++i)
            g_numbers[i] = n[i] - '0';  // game numbers initialization
        // 0 erro 1 cow 2 bull
        // check bulls and cows
        for (int i = 0; i < g_numbers.size(); ++i) {
            if (g_numbers[i] == numbers[i]) result[i] = 2;
            else
                for (int j = 0; j < numbers.size(); ++j)
                    if (i != j && g_numbers[i] == numbers[j]) result[i] = 1;
        }
        for (int x : result) {
            if (x == 1) ++cows;
            else if (x == 2) ++bulls;
        }
        if (bulls == 4) {
            cout << "You win! " << bulls << " bulls\n";
            break;
        }
        else
            cout << cows << " cows " << bulls << " bulls\n"
            << "try again.\n";
    }
}