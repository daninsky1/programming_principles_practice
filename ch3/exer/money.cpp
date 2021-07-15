// page 116
// exercise 11
// money.exe, enter a input values in R$ and will tell how many notes and
// penies equivalent that you have
//#include "../../std_lib_facilities.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.utf8");    // decodifica acentos em português
    constexpr double centavos_5_val = .5;
    constexpr double centavos_10_val = .10;
    constexpr double centavos_25_val = .25;
    constexpr double centavos_50_val = .50;
    constexpr double real_val = 1.00;

    double centavos_5 = 0;
    double centavos_10 = 0;
    double centavos_25 = 0;
    double centavos_50 = 0;
    double real = 0;

    cout << "Diga a quantidade de moedas que você tem.\n"
        << "5 centavos: ";
    cin >> centavos_5;
    cout << "10 centavos: ";
    cin >> centavos_10;
    cout << "25 centavos: ";
    cin >> centavos_25;
    cout << "50 centavos: ";
    cin >> centavos_50;
    cout << "1 real: ";
    cin >> real;

    double centavos_total = 0;
    centavos_total += centavos_5 * centavos_5_val;
    centavos_total += centavos_10 * centavos_10_val;
    centavos_total += centavos_25 * centavos_25_val;
    centavos_total += centavos_50 * centavos_50_val;
    centavos_total += real * real_val;

    cout << "\nVocê tem " << centavos_5 << " tiradentes.\n";
    cout << "Você tem " << centavos_10 << " D. Pedro I.\n";
    cout << "Você tem " << centavos_25 << " Deodoro da Fonseca.\n";
    cout << "Você tem " << centavos_50 << " Barão do Rio Branco.\n";
    cout << "Você tem " << real << " Efígie da República.\n";
    cout << "\nVocê tem " << fixed << setprecision(2) << centavos_total << " centavos\n";
    cout << "\nVocê tem " << fixed << setprecision(2) << centavos_total << " reais\n";
}