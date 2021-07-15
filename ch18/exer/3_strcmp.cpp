#include "../../std_lib_facilities.h"

int strcmp(const char* s1, const char* s2)
{
    int i = 0;
    while (true) {
        if (*(s1 + i) == *(s2 + i)) continue;
        else if (*(s1 + i) < *(s2 + i)) return -1;
        else return 1;
        i++;
    }
    return 0;
}

int main()
{
    char* dan = "Daniel";
    char* mari = "Marina";
    cout << strcmp(dan, mari);
    
    
}