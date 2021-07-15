// exercise 19
// page 150
// store a pair of values name and score
#include "../../std_lib_facilities.h"

bool is_item_string_list(string item, vector<string> list) {
    // check if an string belongs to string list
    for (int i = 0; i < list.size(); ++i) {
        if (item == list[i])
            return true;
    }
    return false;
}

int main()
{
    vector<string> names;
    vector<int> scores;
    string name;
    int score = 0;

    while (cin >> name >> score) {
        if (name == "NoName" && score == 0) {
            break;
        }
        else {
            if (is_item_string_list(name, names)) {
                cout << "Error. Name entered twice." << '\n';
            }
            else {
                names.push_back(name);
                scores.push_back(score);
            }
        }
    }

    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << '\t' << scores[i] << '\n';
    }
}