#include <iostream>
using namespace std;

int main() {
    double celcius, fahrenheit, reamur, kelvin;

    cout << "        PROGRAM KONVERSI SUHU\n\n";
    cout << "Masukan Suhu(Celcius) = ";
    cin >> celcius;

    fahrenheit = (celcius * 9 / 5) + 32;
    reamur     = celcius * 4 / 5;
    kelvin     = celcius + 273.15;

    cout << "Jadi,\n";
    cout << "        " << celcius    << " derajat celcius    = " << fahrenheit << " derajat fahrenheit\n";
    cout << "        " << fahrenheit << " derajat fahrenheit = " << reamur     << " derajat reamur\n";
    cout << "        " << reamur     << " derajat reamur     = " << kelvin      << " derajat kelvin\n";
    cout << "-----------------------------------\n";

    return 0;
}
