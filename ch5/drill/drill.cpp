// page 191
// drill
#include "../../std_lib_facilities.h"

int main()
{
    try {
        cout << "Success! 1\n";
        cout << "Success! 2\n";
        cout << "Success" << "! 3\n";
        string success = "Success! 4";
        cout << success << '\n';
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success! 5\n";
        vector<int> v1(10); v1[5] = 7; if (v1[5] != 7) cout <<
            "Success! 6\n";
        bool cond = true;
        if (cond) cout << "Success! 7\n"; else cout << "Fail!\n";
        bool c = true; if (c) cout << "Success! 8\n"; else cout <<
            "Fail!\n";
        string s = "ape"; bool c1 = "fool" > s; if (c1) cout <<
            "Success! 9\n";
        string s2 = "fool"; if (s2 == "fool") cout << "Success! 10\n";
        string s3 = "fool"; if (s3 == "fool") cout << "Success! 11\n";
        string s1 = "fool"; if (s1 == "fool") cout << "Success! 12\n";
        vector<char> v2(5); for (int i = 0; i < v2.size(); ++i); cout <<
            "Success! 13\n";
        vector<char> v3(5); for (int i = 0; i <= v3.size(); ++i); cout <<
            "Success! 14\n";
        string s4 = "Success! 15\n"; for (int i = 0; i < 12; ++i) cout << s4[i];
        if (true) cout << "Success! 16\n"; else cout << "Fail!\n";
        int x = 2000; int c2 = x; if (c2 == 2000) cout << "Success! 17\n";
        string s5 = "Success! 18\n"; for (int i = 0; i < 12; ++i) cout << s5[i];
        vector<int> v4(5); for (int i = 0; i <= v4.size(); ++i); cout <<
            "Success! 19\n";
        int i = 0; int j = 9; while (i < 10) ++i; if (j < i) cout <<
            "Success! 20\n";
        int x1 = 4; double d = 5.0 / (x1 - 2.0); if (d == 2.0 * x1 + 1.0) cout << "Success! 21\n";
        string s6 = "Success! 22\n"; for (int i = 0; i < 12; ++i)
            cout << s6[i];
        int i1 = 0; int j1 = 0; while (i1 < 10) ++i1; if (j1 < i1) cout << "Success! 23\n";
        int x2 = 4; double d1 = 5 / (x2 - 2); if (d1 = 2.0 * x2 + 1) cout <<
            "Success! 24\n";
        cout << "Success! 25\n";
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}