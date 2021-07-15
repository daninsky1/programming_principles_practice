// exercise 18
// page 149
// resolve quadratic equations
#include "../../std_lib_facilities.h"

bool is_divisible(int n, int m)
{
    // n product, m divisor to be tested
    if (n % m == 0)
        return true;
    else
        return false;
}

int main()
{
    // soma e produto
    int a, b, c;
    int x1 = 0, x2 = 0;
    int sum, product;

    cout << "Enter a, b and c: ";
    while (cin >> a >> b >> c) {
        sum = -(b / a);
        product = c / a;

        cout << "x1 * x2 = " << product << '\t' << "x2 + x2 = " << sum << '\n';

        if (product > 0 && sum > 0) {
            for (int i = 1; i < product; ++i) {
                if (is_divisible(product, i)) {
                    int k = product / i;
                    if (i + k == sum) {
                        x1 = i;
                        x2 = k;
                        break;
                    }
                }
            }
            cout << "The two roots are positive.\n";
        }
        else if (product > 0 && sum < 0) {
            for (int i = 1; i < product; ++i) {
                if (is_divisible(product, i)) {
                    int k = product / i;
                    k *= -1;
                    if (i * -1 + k == sum) {
                        x1 = i * -1;
                        x2 = k;
                        break;
                    }
                }
            }
            cout << "The two roots are negative.\n";
        }
        else if (product < 0 && sum > 0) {
            for (int i = -1; i > product; --i) {
                if (is_divisible(product, i)) {
                    int k = product / i;
                    if (i + k == sum) {
                        x1 = i;
                        x2 = k;
                        break;
                    }
                }
            }
            cout << "The roots have different signs and the one with the highest absolute value is positive.\n";
        }
        else if (product < 0 && sum < 0)
            cout << "The roots have different signs and the one with the highest absolute value is negative.\n";

        if (x1 == 0 && x2 == 0)
            cout << "Error" << '\n';
        else
            cout << "x1 = " << x1 << '\t' << "x2 = " << x2 << '\n';

        cout << "Enter a, b and c: ";
    }
}