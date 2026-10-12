#include <iostream>
using namespace std;

int main() {
    int r, t, volume;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;

    volume = 3.1416 * r * r * t;

    cout << "Volume Tabung adalah: " << volume << endl;

    return 0;
}