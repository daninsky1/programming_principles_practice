#include "../../std_lib_facilities.h"
// Drill
// page 91

int main()
{
    cout << "(Enter the name of the person you want to write to): ";
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;
    cin >> first_name;
    cout << "\n	Dear, " << first_name << "."
        << "\nHow are you? I am fine. I miss you.\n"
        << "Here in Brazil is pretty shit!"
        << "\n(Enter a common friend): ";
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?";
    cout << "\n(Enter an m if the friend is male and f if the friend is female): ";
    cin >> friend_sex;
    if (friend_sex == 'f')
        cout << "\nIf you see " << friend_name << ", please ask her to call me.";
    if (friend_sex == 'm')
        cout << "\nIf you see " << friend_name << ", please ask him to call me.";
    cout << "\n(Enter the person age): ";
    cin >> age;
    if (age <= 0 || age >= 110)
        simple_error("\nYou gotta be fucking kiding me!");
    else
        cout << "\nI hear you just had a birthday and you are " << age << " old.";
    if (age <= 12)
        cout << "\nNext year you will be age+1.";
    if (age == 17)
        cout << "\nNext year you will be able to vote.";
    if (age >= 70)
        cout << "\nI hope you are enjoying your retirement fund.";
    cout << "\n\nYour sincerely.___________________________________"
        << "\n__________________________________________________"
        << "\n\n	Daniel Silva dos Santos.\n\n";
}
