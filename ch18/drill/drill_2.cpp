#include "../../std_lib_facilities.h"


vector<int> gv = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

void f(vector<int> v)
{
    vector<int> lv = v;
    cout << "stack copy:\n";
    for (int i = 0; i < v.size(); ++i) {
        cout << lv[i] << '\n';
    }
    
    vector<int> lv2 = v;
    cout << "heap copy:\n";
    for (int i = 0; i < v.size(); ++i) {
        cout << lv2[i] << '\n';
    }
}

int main()
{
    f(gv);
    vector<int> vv = { 1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1,
                   8*7*6*5*4*3*2*1, 9*7*6*5*4*3*2*1, 10*9*7*6*5*4*3*2*1 };
    f(vv);
}