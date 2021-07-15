#include "../../std_lib_facilities.h"
#include "2_printv.cpp"

vector<int> str_vec_sizes(const vector<string> &v)
{
    // returns a vector<int> containing the nmber of characters in each string
    vector<int> sizes;
    for (int i = 0; i < v.size(); ++i)
        sizes.push_back(v[i].size());
    return sizes;
}

string long_str(const vector<string> &v)
{
    if (v.size() == 0) error("cannot compute empty vector");
    int long_str_size = v[0].size();
    string long_str = v[0];
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].size() > long_str_size) {
            long_str_size = v[i].size();
            long_str = v[i];
        }
    }
    return long_str;
}

string small_str(const vector<string> &v)
{
    if (v.size() == 0) error("cannot compute empty vector");
    int long_str_size = v[0].size();
    string long_str = v[0];
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].size() < long_str_size) {
            long_str_size = v[i].size();
            long_str = v[i];
        }
    }
    return long_str;
}

string lexi_first(const vector<string> &v)
{
    if (v.size() == 0) error("cannot compute empty vector");
    string lexi_first = v[0];
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < lexi_first) {
            lexi_first = v[i];
        }
    }
    return lexi_first;
}
string lexi_last(const vector<string> &v)
{
    if (v.size() == 0) error("cannot compute empty vector");
    string lexi_last = v[0];
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > lexi_last) {
            lexi_last = v[i];
        }
    }
    return lexi_last;
}

int main()
{
    vector<string> s = { "daniel", "marina", "zilda", "jose",
                         "mariel", "zilda", "daniel", "marina"};
    vector<int> s_sizes = str_vec_sizes(s);
    printv(s, "s");
    printv(s_sizes, "s_sizes");
    string longest = long_str(s);
    cout << "longest str: " << longest << '\n';
    string smallest = small_str(s);
    cout << "smallest str: " << smallest << '\n';
    string first = lexi_first(s);
    cout << "lexicographically first str: " << first << '\n';
    string last = lexi_last(s);
    cout << "lexicographically second str: " << last << '\n';

}