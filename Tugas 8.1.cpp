#include <iostream>
#include <string>
using namespace std;

int pilihBangun, pilihHitung;
const double PI = 3.14159;

string garis() {
    string s = "";
    for (int i = 0; i < 40; i++) s += "=";
    return s;
}

void DataDiri() {
    string nama, nim;
    cout << "Masukan Nama Lengkap Anda : ";
    getline(cin, nama);
    cout << "Masukan Nim Anda          : ";
    getline(cin, nim);
    cout << garis() << endl;
}

void BangunDatar() {
    cout << "\n=== BANGUN DATAR ===\n";
    cout << "1. Persegi\n2. Persegi panjang\n3. Segitiga\n4. Lingkaran\n5. Trapesium\n";
    cout << "Masukan Pilihan Bangun Datar : ";
    cin >> pilihBangun;
    cout << "Pilihan Anda Adalah ";
    switch (pilihBangun) {
        case 1: cout << "Persegi\n"; break;
        case 2: cout << "Persegi Panjang\n"; break;
        case 3: cout << "Segitiga\n"; break;
        case 4: cout << "Lingkaran\n"; break;
        case 5: cout << "Trapesium\n"; break;
        default: cout << "(tidak valid)\n";
    }
}

void Hitung() {
    cout << "\nKamu ingin Hitung Luas(1)/Volume(2) ? ";
    cin >> pilihHitung;
    double a, b, c, t;

    if (pilihHitung == 1) {
        switch (pilihBangun) {
            case 1:
                cout << "Masukan sisi : "; cin >> a;
                cout << "Luas Persegi : sisi x sisi = " << a * a << endl; break;
            case 2:
                cout << "Masukan panjang : "; cin >> a;
                cout << "Masukan lebar   : "; cin >> b;
                cout << "Luas Persegi Panjang : panjang x lebar = " << a * b << endl; break;
            case 3:
                cout << "Masukan alas   : "; cin >> a;
                cout << "Masukan tinggi : "; cin >> t;
                cout << "Luas Segitiga : 1/2 x alas x tinggi = " << 0.5 * a * t << endl; break;
            case 4:
                cout << "Masukan jari-jari : "; cin >> a;
                cout << "Luas Lingkaran : phi x r x r = " << PI * a * a << endl; break;
            case 5:
                cout << "Masukan sisi sejajar a : "; cin >> a;
                cout << "Masukan sisi sejajar b : "; cin >> b;
                cout << "Masukan tinggi         : "; cin >> t;
                cout << "Luas Trapesium : 1/2 x (a+b) x t = " << 0.5 * (a + b) * t << endl; break;
        }
    } else if (pilihHitung == 2) {
        switch (pilihBangun) {
            case 1:
                cout << "Masukan sisi : "; cin >> a;
                cout << "Volume Kubus : s x s x s = " << a * a * a << endl; break;
            case 2:
                cout << "Masukan panjang : "; cin >> a;
                cout << "Masukan lebar   : "; cin >> b;
                cout << "Masukan tinggi  : "; cin >> t;
                cout << "Volume Balok : p x l x t = " << a * b * t << endl; break;
            case 3:
                cout << "Masukan alas segitiga   : "; cin >> a;
                cout << "Masukan tinggi segitiga : "; cin >> b;
                cout << "Masukan tinggi prisma   : "; cin >> t;
                cout << "Volume Prisma Segitiga : (1/2 x alas x tinggi) x tinggiPrisma = "
                     << 0.5 * a * b * t << endl; break;
            case 4:
                cout << "Masukan jari-jari : "; cin >> a;
                cout << "Masukan tinggi    : "; cin >> t;
                cout << "Volume Tabung : phi x r x r x t = " << PI * a * a * t << endl; break;
            case 5:
                cout << "Masukan sisi sejajar a : "; cin >> a;
                cout << "Masukan sisi sejajar b : "; cin >> b;
                cout << "Masukan tinggi trapesium : "; cin >> c;
                cout << "Masukan tinggi prisma    : "; cin >> t;
                cout << "Volume Prisma Trapesium = " << 0.5 * (a + b) * c * t << endl; break;
        }
    } else {
        cout << "Pilihan tidak valid!\n";
    }
    cout << garis() << endl;
}

int main() {
    char ulang;
    DataDiri();
    do {
        BangunDatar();
        Hitung();
        cout << "\nApakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nSELAMAT KAMU TELAH MENYELESAIKAN LATIHAN !!!\n";
    return 0;
}