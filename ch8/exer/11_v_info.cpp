#include "../../std_lib_facilities.h"

struct V_info
{
    double smallest;
    double largest;
    double mean;
    double median;
};

void comp_info(const vector<double> &v, double &smallest, double &largest,
double &mean, double &median)
{
    smallest = v[0];
    for (int i = 0; i < v.size(); ++i)
        if (v[i] < smallest) smallest = v[i];
    largest = v[0];
    for (int i = 0; i < v.size(); ++i)
        if (v[i] > largest) largest = v[i];
    double sum = 0;

    for (double x : v)
        sum += x;
    mean = sum / v.size();

    vector<double> temp = v;
    sort(temp.begin(), temp.end());
    if (temp.size() % 2 == 1) median = temp[temp.size() / 2];
    else median = (temp[temp.size() / 2 - 1] + temp[temp.size() / 2]) / 2;
}

V_info comp_info(const vector<double> &v)
{
    V_info v_info;
    v_info.smallest = v[0];
    for (int i = 0; i < v.size(); ++i)
        if (v[i] < v_info.smallest) v_info.smallest = v[i];
    v_info.largest = v[0];
    for (int i = 0; i < v.size(); ++i)
        if (v[i] > v_info.largest) v_info.largest = v[i];
    double sum = 0;

    for (double x : v)
        sum += x;
    v_info.mean = sum / v.size();

    vector<double> temp = v;
    sort(temp.begin(), temp.end());
    if (temp.size() % 2 == 1) v_info.median = temp[temp.size() / 2];
    else v_info.median = (temp[temp.size() / 2 - 1] + temp[temp.size() / 2]) / 2;
    return v_info;
}

int main()
{
    vector<double> v = { 2.4, 6.7, 4.0, 3.5, 10.4, 11.3, 15.4, 5.0 };
    double smallest, largest, mean, median;
    comp_info(v, smallest, largest, mean, median);
    cout << "smallest: " << smallest << ", largest: " << largest
    << ", mean: " << mean << ", median: " << median << '\n';
    V_info v_info = comp_info(v);
    cout << "smallest: " << v_info.smallest << ", largest: " << v_info.largest
    << ", mean: " << v_info.mean << ", median: " << v_info.median << '\n';

}