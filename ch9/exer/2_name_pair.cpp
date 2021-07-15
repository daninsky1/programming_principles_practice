#include "../../std_lib_facilities.h"

class Name_pairs {
    vector<string> name;
    vector<double> age;
public:
    void read_names();
    void read_ages();
    void print();
    void sort();
};

void Name_pairs::read_names()
{
    string name_inp;
    cout << "Write names separeted by spaces or not."
         << "use \"quit\" when you're done.\n";
    while (cin >> name_inp) {
        if (name_inp == "quit") break;
        name.push_back(name_inp);
    }
}

void Name_pairs::read_ages()
{
    if (!name.size()) {
        cout << "No Names to have a age.";
        return;
    }
    double age_inp;
    for (int i = 0; i < name.size(); ++i) {
        cout << "What's the age of '" << name[i] << "': ";
        cin >> age_inp;
        age.push_back(age_inp);
    }
    cout << "Done!\n";
}

void Name_pairs::print()
{
    for (int i = 0; i < name.size(); ++i) {
        cout << '(' << name[i] << ", " << age[i] << ')';
    }
}

void Name_pairs::sort()
{
    vector<string> temp_name = name;
    vector<double> temp_age = age;
    age.clear();
    std::sort(name.begin(), name.end());
    
    for (int i = 0; i < name.size(); ++i) {
        string curr_name = name[i];
        for (int j = 0; j < temp_name.size(); ++j) {
            if (curr_name == temp_name[j]) {
                cout << temp_age[j] << '\n';
                age.push_back(temp_age[j]);
                break;
            }
        }
    }
}

int main()
{
    Name_pairs family;
    family.read_names();
    family.read_ages();
    family.sort();
    family.print();
}