#include "../../std_lib_facilities.h"

void to_lower(char* s)
{
    int i = 0;
    while (s[i] != 0) {
        if (s[i] > 64 && s[i] < 91) {
            s[i] += 32;
        }
        i++;
    }
}

int main()
{
    char my_string[] = "Hello, World!";
    cout << +my_string << "\n";
    to_lower(my_string);
    cout << my_string << "\n";
}