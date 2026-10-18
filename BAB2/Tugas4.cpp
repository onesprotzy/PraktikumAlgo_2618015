#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    double pendapatan, tarif, pajak;
    int tanggungan;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;

    cout << "Nama Anda : ";
    getline(cin, nama);
    cout << "NIM Anda  : ";
    getline(cin, nim);

    cout << endl << "		DATA PENDAPATAN" << endl << endl;

    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "Input tidak valid! Pendapatan tidak boleh negatif." << endl;
        return 0;
    }

    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> tanggungan;

    if (tanggungan != 0 && tanggungan != 1) {
        cout << "Input tidak valid! Masukkan 1 atau 0." << endl;
        return 0;
    }

    if (pendapatan < 5000000) {
        tarif = 0.0;
    } else if (pendapatan < 10000000) {
        tarif = 0.05;
    } else if (pendapatan < 20000000) {
        tarif = 0.10;
    } else {
        tarif = 0.15;
    }

    pajak = pendapatan * tarif;

    if (tanggungan == 1) {
        pajak = pajak - 100000;
    }

    if (pajak < 0) {
        pajak = 0;
    }

    cout << "Tarif pajak: " << tarif * 100 << "%" << endl;
    cout << "Pajak akhir: Rp" << (long long)pajak << endl;
    cout << "--------------------------------" << endl;

    return 0;
}