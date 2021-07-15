// exercise 3
// page 149
// find and print the smallest, greatest, and the mean distance between two
// neighboring cities distance between two neighboring cities.
#include "../../std_lib_facilities.h"

int main()
{
    vector<double> distance;		// distance
    for (double temp; cin >> temp;)	// read into temp
        distance.push_back(temp);	// put distance into v ector
    //compute mean distance:
    double sum = 0;
    for (int x : distance) sum += x;
    cout << "Mean distance: " << sum / distance.size() << '\n';
    // compute median distance:
    sort(distance);

    cout << "Minimum distance: " << distance[0] << '\n';
    cout << "Maximum distance: " << distance[distance.size() - 1] << '\n';
}