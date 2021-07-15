#include "../../std_lib_facilities.h"

void sort_name_age(vector<string> &names, vector<double> &ages)
{
    vector<string> names_temp = names;
    sort(names.begin(), names.end());
    vector<double> ages_temp;
    for (int i = 0; i < names.size(); ++i) {
        for (int j = 0; j < names_temp.size(); ++j) {
            if (names[i] == names_temp[j]) {
                ages_temp.push_back(ages[j]);
            }
        }
    }
    ages = ages_temp;
}

int main()
{
    vector<string> names{ "daniel", "marina", "jose", "zilda", "gustavo"};
    vector<double> ages;
    for (int i = 0; i < names.size(); ++i) {
        double age;
        cout << "What is the age of " << names[i] << "? ";
        cin >> age;
        ages.push_back(age);
    }
    sort_name_age(names, ages);
    for (int i = 0; i < names.size(); ++i) {
        cout << "name: " << names[i] << ", age: " << ages[i] << '\n';
    }
}