#include "../../std_lib_facilities.h"

char* my_strdup(const char* s)
{
    int i = 0;
    int sz = 0;
    while (*(s + i) != 0) {
        sz++;
        i++;
    }
    i = 0;

    char* new_str = new char[sz];
    while (*(s + i) != 0) {
        *(new_str + i) = *(s + i);
        i++;
    }
    *(new_str + i) = 0;
    return new_str;
}

int main()
{
    char my_string[] = "Hello, World!";
    cout << my_string << "\n";
    char* new_str = my_strdup(my_string);
    cout << new_str << "\n";
}