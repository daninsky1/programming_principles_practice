// page 143
// exercise 2 page 149
// mean and median temperature calculator
#include "../../std_lib_facilities.h"

bool is_even(int n)
{
    if (n % 2) return false;
    return true;
}

int main()
{
    vector<double> temps;			// temperatures
    for (double temp; cin >> temp;)	// read into tem p
        temps.push_back(temp);		// put temp into v ector
    //compute mean temperature:
    double sum = 0;
    for (int x : temps) sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';
    // compute median temperature:
    sort(temps);
    if (is_even(temps.size())) {
        int bad_median = temps.size() / 2;
        temps.insert(temps.begin() + bad_median, (temps[bad_median] + temps[bad_median - 1]) / 2);
        cout << "Median temperatures: " << temps[temps.size() / 2] << '\n';
    }
    else
        cout << "Median temperatures: " << temps[temps.size() / 2] << '\n';
}