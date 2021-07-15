// exercise 9
// TODO exercise 9: write out an error if the result cannot be
// represented as an int

#include "../../std_lib_facilities.h"

int main()
{
    int i, n, sum = 0;
    vector<int> numbers;

    cout << "Please enter the number of values you want to sum: ";
    cin >> n;
    while (n <= 1) {
        cout << "Cannot do this sum!\nPlease enter a value greater than 1: ";
        cin >> n;
    }

    cout << "Please enter some integers (press '|' to stop): ";
    while (cin >> i) {
        numbers.push_back(i);
    }

    if (numbers.size() < n)
        cout << "You asked for a sum of " << n << " numbers, but provided only " << numbers.size() << '\n';
    else {
        for (int i = 0; i < n; ++i)
            sum += numbers[i];
        cout << "The sum of the first 3 numbers = " << sum << '\n';
    }
}