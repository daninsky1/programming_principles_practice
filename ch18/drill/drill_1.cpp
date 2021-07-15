#include "../../std_lib_facilities.h"


int ga[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

void f(int A[], int sz)
{
    int la[sz];
    cout << "stack copy:\n";
    for (int i = 0; i < sz; ++i) {
        la[i] = A[i];
        cout << la[i] << '\n';
    }
    
    int* p = new int[sz];
    cout << "heap copy:\n";
    for (int i = 0; i < sz; ++i) {
        p[i] = A[i];
        cout << p[i] << '\n';
    }
    delete[] p;
}

int main()
{
    f(ga, 10);
    int aa[10] = { 1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1,
                   8*7*6*5*4*3*2*1, 9*7*6*5*4*3*2*1, 10*9*7*6*5*4*3*2*1 };
    f(aa, 10);
}