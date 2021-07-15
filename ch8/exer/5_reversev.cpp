#include "2_printv.cpp"

void fibonacci(int x, int y, vector<int> &v, int n){
    if (n >= 1) { v[0] = x; }
    if (n >= 2) { v[1] = y; }
    for (int i = 2; i < n; ++i){
        v[i] = v[i - 1] + v[i - 2];
    }
}

vector<int> reversev(const vector<int> &v)
{
    vector<int> new_v;
    for (int i = v.size() - 1; i >= 0; --i) {
        new_v.push_back(v[i]);
    }
    return new_v;
}

void reversev_r(vector<int> &v)
{
    for (int i = 1; i <= v.size() / 2; ++i) {
        int temp = v[i - 1];
        v[i - 1] = v[v.size() - i];
        v[v.size() - i] = temp;
    }
}

int main()
{
    int v_size = 11;
    vector<int> fibo(v_size, 0);
    fibonacci(1, 2, fibo, v_size);
    vector<int> fibo_reverse = reversev(fibo);
    reversev_r(fibo);
    printv(fibo, "fibo");
    printv(fibo_reverse, "fibo_reverse");
    printv(fibo, "fibo");

}