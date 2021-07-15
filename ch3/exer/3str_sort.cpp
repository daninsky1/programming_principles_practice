// page 116
// exercise 7
// 3 string sort
#include "../../std_lib_facilities.h"

int main()
{
    string name1;
    string name2;
    string name3;
    string buffer;
    cout << "Enter 3 words: ";
    cin >> name1 >> name2 >> name3;

    if (name1 > name2) {
        buffer = name1;
        name1 = name2;
        name2 = buffer;
    }
    if (name2 > name3) {
        buffer = name2;
        name2 = name3;
        name3 = buffer;
    }
    if (name1 > name2) {
        buffer = name1;
        name1 = name2;
        name2 = buffer;
    }
    cout << name1 << ", " << name2 << ", " << name3 << ".\n";
}