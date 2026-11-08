#include <iostream>
#include <string>
using namespace std;
 
const string NAMA = "Onesimus Desco Natalino";
const string NIM  = "2618015";
 
int main() {
    int n;
    long long faktorial = 1;
 
    cout << "## " << NAMA << " - " << NIM << " ##\n";
    cout << "==================================\n";
    cout << "## Program C++ Hitung Faktorial ##\n";
    cout << "==================================\n\n";
 
    cout << "Input angka: ";
    cin >> n;
 
    cout << n << "! = ";
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
        cout << i;
        if (i < n) {
            cout << " * ";
        }
    }
    cout << " = " << faktorial << endl;
 
    return 0;
}