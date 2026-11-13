#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2618015 || Onesimus Desco Natalino" << endl;
    cout << "TUGAS BAB 7" << endl;
    cout << "===================================" << endl;

    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    cout << endl << "2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> n;
    cout << endl;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << j * 2 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl << "3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga siku-siku: ";
    cin >> n;
    cout << endl;
    int a = 1;
    do {
        int b = 1;
        do {
            cout << char('A' + b - 1) << " ";
            b++;
        } while (b <= a);
        cout << endl;
        a++;
    } while (a <= n);

    return 0;
}
