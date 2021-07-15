#include "2_printv.cpp"

void fibonacci(int x, int y, vector<int> &v, int n){
    if (n >= 1) { v[0] = x; }
    if (n >= 2) { v[1] = y; }
    for (int i = 2; i < n; ++i){
        v[i] = v[i - 1] + v[i - 2];
    }
}

int main()
{
    int v_size = 45;
    vector<int> fibo(v_size, 0);
    fibonacci(1, 2, fibo, v_size);
    printv(fibo);
}