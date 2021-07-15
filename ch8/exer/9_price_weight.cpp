#include "../../std_lib_facilities.h"
#include "2_printv.cpp"

vector<double> comp_index(const vector<double> &price, const vector<double> &weight)
{
    vector<double> index;
    if (price.size() != weight.size()) error("Diferent sizes");
    for (int i = 0; i < price.size(); ++i) {
        index.push_back(price[i] * weight[i]);
    }
    return index;
}

int main()
{
    vector<double> price = { 2.75, 4.99, 6.49, 8,99, 3.99, 4.79 };
    vector<double> weight = { 1.600, 2.000, 0.500, 0.200, 3.100 };
    vector<double> index = comp_index(price, weight);
    printv(index);
}