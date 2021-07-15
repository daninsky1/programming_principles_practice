#include "../../std_lib_facilities.h"
// read a word until '!' mark


int main()
{
    string input;
    char* word = new char[10];
    cin >> input;
    int i = 0;
    while (input[i] != '!') {
        word[i] = input[i];
        i++;
    }
    word[i] = 0; 
    cout << word;
}