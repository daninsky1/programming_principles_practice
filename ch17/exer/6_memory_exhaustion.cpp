#include "../../std_lib_facilities.h"

int main()
{
    double i = 0.0;
    long long sz = 0;
    while (true) {
        double* explode = new double[128*10000];
        sz += 128*10000;
        cout << "Memory Address: " << explode
             << "\tBytes: " << sz << '\n';
        i++;
    }
}