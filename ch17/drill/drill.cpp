#include "../../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
    int sz = 10;
    for (int i = 0; i < sz; ++i) {
        os << a[i] << "\n";
    }
}

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) {
        os << a[i] << "\n";
    }
}

void print_vector(ostream& os, vector<int>& a)
{
    for (int i = 0; i < a.size(); ++i) {
        os << a[i] << "\n";
    }
}

void drill_part1()
{
    int sz = 10;
    int* ii = new int[sz];
    for (int i = 0; i < sz; ++i) {
        cout << ii[i] << "\n";
    }
    delete[] ii;
    
    int* ii2 = new int[sz];
    for (int i = 0; i < sz; ++i) {
        ii2[i] = 100+i;
    }
    print_array10(cout, ii2);
    delete[] ii2;
    
    int* ii3 = new int[sz+1];
    for (int i = 0; i < sz+1; ++i) {
        ii3[i] = 100+i;
    }
    print_array10(cout, ii3);
    delete[] ii3;
    
    sz = 20;
    int* ii4 = new int[sz];
    for (int i = 0; i < sz; ++i) {
        ii4[i] = 100+i;
    }
    print_array(cout, ii4, sz);
    delete[] ii4;
    
    cout << "vectors\n";
    
    vector<int> v1(10);
    for (int i = 0; i < v1.size(); ++i) {
        v1[i] = 100+i;
    }
    print_vector(cout, v1);
    vector<int> v2(11);
    for (int i = 0; i < v2.size(); ++i) {
        v2[i] = 100+i;
    }
    print_vector(cout, v2);
        vector<int> v3(20);
    for (int i = 0; i < v3.size(); ++i) {
        v3[i] = 100+i;
    }
    print_vector(cout, v3);
}

int main()
{
    // drill second part
    int* i = new int{7};
    int* p1 = i;
    cout << "p1: " << p1 << " : " << *p1 << '\n';
    
    int* A = new int[7]{ 1, 2, 3, 4, 5, 6, 7};
    int* p2 = A;
    cout << "p2: " << p2 << " : " << *p2 << '\n';
    print_array(cout, p2, 7);
    
    int* p3 = p2;
    p1 = p2;
    p3 = p2;
    cout << "p1: " << p1 << ", p2: " << p2 << "\n";
    delete i;
    delete[] A;
    
    int A10[10] = { 1, 2, 3, 4 , 5, 6, 7, 8, 9, 10 };
    p1 = A10;
    int A210[10];
    p2 = A210;
    
    for (int i = 0; i < 10; ++i) {
        p2[i] = p1[i];
    }
    print_array(cout, p1, 10);
    print_array(cout, p2, 10);
    
    vector<int> v10 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v210(10);
    for (int i = 0; i < v10.size(); ++i) {
        v10[i] = v210[i];
    }
    
    // TODO: part 2 drill 13
    
    cout << "vectors\n";
    
    print_vector(cout, v10);
    print_vector(cout, v210);
    
}