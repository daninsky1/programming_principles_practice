#include "../../std_lib_facilities.h"

void print_until_s(vector<string> v, string quit)
{
    for(string s : v) {
        if (s == quit) return;
        cout << s << '\n';
    }
}

void print_until_ss(vector<string> v, string quit)
{
    int count = 0;
    for(string s : v) {
        if (s == quit) {
            count++;
            if (count == 2) return;
        }
        cout << s << '\n';
    }
}

int main()
{
    vector<string> s = { "daniel", "marina", "zilda", "jose",
                         "mariel", "zilda", "daniel", "marina"};
    cout << "print_until_s: \n";
    print_until_s(s, "jose");
    cout << "print_until_ss: \n";
    print_until_ss(s, "daniel");
}