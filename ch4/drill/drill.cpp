// drill
//page 147
#include "../../std_lib_facilities.h"

void two_doubles()
{
    double num1, num2;
    double differ = 1.0 / 100;
    while (cin >> num1 >> num2) {
        if (num1 > num2) {
            if (num1 - num2 < differ)
                cout << "The numbers are almost equal!" << '\n';
            cout << "The larger value is: " << num1 << '\n'
                << "The smaller value is: " << num2 << '\n';
        }
        else if (num1 < num2) {
            if (num1 - num2 < differ)
                cout << "The numbers are almost equal!" << '\n';
            cout << "The larger value is: " << num2 << '\n'
                << "The smaller value is: " << num1 << '\n';
        }
        else
            cout << "The values are equal";
    }
}

// just one double at time 6.
void one_double()
{
    double num;
    double larger = 0.0;
    double smaller = 0.0;
    vector<double> sum;
    constexpr double differ = 1.0 / 100;

    string factor;

    constexpr double cm = 1;
    constexpr double m = 100;
    constexpr double in = 2.54;
    constexpr double ft = 12 * in;

    cout << "Insert a number and a unit. Valid units: cm, m, in, ft.\n"
            "You can keep adding units one at a time.\n"
            "You can exit at any moment to see the sorted list of your inputs.\n";
    while (cin >> num >> factor) {
        if (factor == "cm" || factor == "CM") {
            sum.push_back(num / m);
        }
        else if (factor == "m" || factor == "M") {
            sum.push_back(num);
        }
        else if (factor == "in") {
            sum.push_back(num * in / m);
        }
        else if (factor == "ft") {
            sum.push_back(num * ft * in / m);
        }
        else
            cout << "not a valid measure!" << '\n';

        sort(sum);

        cout << "The larger value so far: " << sum[sum.size() - 1] << '\n';

        cout << "The smaller value so far: " << sum[0] << '\n';
    }
    for (double x : sum)
        cout << x << "m\n";
}

int main()
{
    one_double();
}