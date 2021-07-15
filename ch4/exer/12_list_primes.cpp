// page 150
// exercise 12
// find all primes until the max input value
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
    int number;
    cin >> number;
    int prime_size = 0;

    for (int i = 0; i < number; ++i) {
        if (is_prime(i)) {
            ++prime_size;
            cout << i << '\n';
        }
    }
    cout << "Size: " << prime_size << '\n';
}