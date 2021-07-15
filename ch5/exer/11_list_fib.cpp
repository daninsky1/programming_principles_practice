// exercise 11
// list Fibonacci series, until the max value that a long long int can take
#include "../../std_lib_facilities.h"

int main()
{
    long long int prev2 = 1, prev1 = 1, result;

    cout << "Fibonacci serie:\n";
    for (int i = 3; i <= 50; ++i) {
        result = prev1 + prev2;
        prev2 = prev1;
        prev1 = result;
        cout << i << '\t' << result << '\n';
    }
    // Max int number: 1836311903
}