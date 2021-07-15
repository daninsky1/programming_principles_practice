// try this
// page 139
#include "../../std_lib_facilities.h"

void money_exchange_switch()
{
    // try this
    // page 130
    constexpr double real_per_dollar = 5.38;
    double monetary_value = 1;

    constexpr char USD = 'U';
    constexpr char BRL = 'B';

    char unit = ' ';
    cout << "Please enter a monetary value followed by a unit (B for BRL or U for USD):\n";
    cin >> monetary_value >> unit;

    switch (unit) {
    case BRL:
        cout << monetary_value << " US dollar in == " << real_per_dollar * monetary_value << "BRL\n";
        break;
    case USD:
        cout << monetary_value << " BR real in == " << monetary_value / real_per_dollar << "USD\n";
        break;
    default:
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
        break;
    }
}

void char_while_loop()
{
    // try this
    // page 134
    int i = 33;
    char c;
    while (i < 127) {
        c = i;
        cout << c << '\t' << i << '\n';
        ++i;
    }
}

void char_for_loop()
{
    // try this
    // page 136
    char c;
    for (int i = 33; i < 127; ++i) {
        c = i;
        cout << c << '\t' << i << '\n';
    }
}

int s_square(int x)
{
    int re = 0;
    for (int i = 0; i < x; ++i)
        re += x;
    return re;
}

void bleeps_words()
{
    // try this
    // page 146
}


int main()
{

}