#include <iostream>
#include "windows.h"
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int a, b; // a - початкове значення x; b - кінцеве значення x
    double h; // h - крок за x
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть h: ";
    cin >> h;

    double y, x = a;
    while (x <= b) {
        y = pow(x, 8) + 5 * pow(x, 2) - 5;
        cout << setw(10) << "x=" << fixed << setprecision(1) << x << setw(10) << "y=" << y << endl;
        x += h;
    }
 
}


