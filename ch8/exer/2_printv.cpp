#include "../../std_lib_facilities.h"

void printv(const vector<int> &vec, string label = "")    // label: label the output
{
    // 1D vector
    size_t v_size = vec.size();    // size of the vector
    if (label.size()) { cout << label << ": "; }
    std::cout << '{';
    for(int i = 0; i < v_size; ++i){
        std::cout << vec[i];
        if(i < v_size - 1)   // put comma until the last element
            std::cout << ", ";
    }
    std::cout << "}\n";
}

void printv(const vector<double> &vec, string label = "")    // label: label the output
{
    // 1D vector
    size_t v_size = vec.size();    // size of the vector
    if (label.size()) { cout << label << ": "; }
    std::cout << '{';
    for(int i = 0; i < v_size; ++i){
        std::cout << vec[i];
        if(i < v_size - 1)   // put comma until the last element
            std::cout << ", ";
    }
    std::cout << "}\n";
}

void printv(const vector<string> &vec, string label = "")    // label: label the output
{
    // 1D vector
    size_t v_size = vec.size();    // size of the vector
    if (label.size()) { cout << label << ": "; }
    std::cout << '{';
    for(int i = 0; i < v_size; ++i){
        std::cout << vec[i];
        if(i < v_size - 1)   // put comma until the last element
            std::cout << ", ";
    }
    std::cout << "}\n";
}

