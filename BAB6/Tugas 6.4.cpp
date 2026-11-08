#include <iostream>
#include <string>
using namespace std;

const string NAMA = "Onesimus Desco Natalino";
const string NIM  = "2618015";
 
int main() {
    int n;
 
    cout << "===== " << NIM << " || " << NAMA << " =====\n\n";
 
    cout << "Masukkan jumlah angka: ";
    cin >> n;
 
    cout << "\n=== Deret Campur Logika ===\n";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i * 2;
        } else if (i % 3 == 0) {
            cout << i + 3;
        } else {
            cout << i;
        }
        cout << " ";
    }
    cout << endl;
 
    return 0;
}
