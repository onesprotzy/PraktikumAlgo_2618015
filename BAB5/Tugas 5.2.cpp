#include <iostream>
using namespace std;

int main() {
	string nama, nim;
    int pilihan;

    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan NIM : ";
    getline(cin, nim);

    cout << "\n=== MENGHITUNG LUAS BANGUN DATAR ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilih bangun datar: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            double sisi;
            cout << "Masukkan sisi : ";
            cin >> sisi;
            cout << "Luas persegi = " << sisi * sisi << endl;
            break;
        }
        case 2: {
            double panjang, lebar;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            cout << "Luas persegi panjang = " << panjang * lebar << endl;
            break;
        }
        case 3: {
            double alas, tinggi;
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
            cout << "Luas segitiga = " << 0.5 * alas * tinggi << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}