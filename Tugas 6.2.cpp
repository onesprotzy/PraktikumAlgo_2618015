#include <iostream>
#include <string>
using namespace std;
 
const string NIM = "2618015";
 
int main() {
    int n, i = 1, total = 0;
 
    cout << "##             " << NIM << "             ##\n";
    cout << "## Program C++ Penjumlahan Deret ##\n";
    cout << "==================================\n\n";
 
    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;
 
    while (i <= n) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
        total += i;
        i++;
    }
    cout << " = " << total << endl;
 
    return 0;
}
 