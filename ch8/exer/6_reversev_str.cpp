#include "2_printv.cpp"

vector<string> reversev(const vector<string> &v)
{
    vector<string> new_v;
    for (int i = v.size() - 1; i >= 0; --i) {
        new_v.push_back(v[i]);
    }
    return new_v;
}

void reversev_r(vector<string> &v)
{
    for (int i = 1; i <= v.size() / 2; ++i) {
        string temp = v[i - 1];
        v[i - 1] = v[v.size() - i];
        v[v.size() - i] = temp;
    }
}

int main()
{
    vector<string> names{ "daniel", "marina", "jose", "zilda" };
    vector<string> names_reverse = reversev(names);
    reversev_r(names);
    printv(names, "names");
    printv(names_reverse, "names copy reverse");
    printv(names, "names reverence reverse");

}