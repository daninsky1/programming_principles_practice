// exercise 11 and 12 and 15
// page 149
// find all th eprime numbers between 1 and 100
#include "../../std_lib_facilities.h"

bool is_prime(int number)
{
    if (number <= 1)
        return false;
    else if (number == 2)
        return true;

    for (int i = 2; i < number - 1; ++i)
        if (number % i == 0)
            return false;
    return true;
}

int main()
{
    for (int i = 0; i < 100; ++i) {
        if (is_prime(i)) {
            cout << i << '\n';
        }
    }
}