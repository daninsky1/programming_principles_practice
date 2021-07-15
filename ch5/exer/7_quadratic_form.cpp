// page 195
// exercise 7
// resolve equation using the Bhaskara formula
#include "../../std_lib_facilities.h"

double square(double x) { return x * x; }

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    cout << "input the a, b, c variables of the equation separeted by space.";
    cin >> a >> b >> c;
    double delta = square(b) - 4 * a * c;
    double x1, x2;

    if (delta < 0) {
        cout << "Delta = " << delta << "\nA equação não possui resultados reais.\n";
        cout << "How do you know that your results are plausible? Can you check that they are correct?\n";
    }
    else if (delta == 0) {
        cout << "Delta = " << delta <<
            "\nA equação possui apenas um resultado real.\n";
        delta = sqrt(delta);
        x1 = (-b + delta) / 2 * a;
        cout << "x = " << x1 << '\n';
    }
    else if (delta > 0) {
        cout << "Delta = " << delta << "\nA equação possui dois resultados distintos reais.\n";
        delta = sqrt(delta);
        x1 = (-b + delta) / 2 * a;
        x2 = (-b - delta) / 2 * a;
        cout << "x1 = " << x1 << '\t' << "x2 = " << x2 << '\n';
    }
}