// exercise 10
// page 149
// jokempo game
#include "../../std_lib_facilities.h"

int main()
{

    default_random_engine generator;
    uniform_int_distribution<int> distribution(0, 2);
    int dice_roll;

    vector<string> jokempo = { "papel", "pedra", "tesoura" };

    cout << "Press enter to go: ";
    while (cin.get()) {
        dice_roll = distribution(generator);
        cout << jokempo[dice_roll];
        cout << '\n' << "Press enter to go: ";
    }

}