#include "../../std_lib_facilities.h"

char* findx(const char* s, const char* x)
{
    int i = 0;
    char* occur = new char;
    while (s[i] != 0) {
        if (s[i] == *x) {
            *occur = s[i];
            return occur;
        };
        i++;
    }
    return occur;
}

int main()
{
    char my_string[] = "Hello, World!";
    char letter = 'W';
    cout << my_string << "\n";
    char* occur = findx(my_string, &letter);
    cout << *occur << "\n";
}