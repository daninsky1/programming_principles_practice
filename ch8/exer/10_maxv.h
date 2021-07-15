#include "../../std_lib_facilities.h"

double maxv(const vector<double> &v)
{
    if (v.size() == 0) error("vector is empty.");
    if (v.size() == 1) return v[0];
    double maxv = v[0];
    for (double x : v) {
        if (x > maxv) maxv = x;
    }
    return maxv;
}