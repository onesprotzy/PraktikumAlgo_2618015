#include <iostream>
#include <string>
using namespace std;

int pilihan;
string nama, noHp;

const int tarifCuciBiasa = 5000;
const int tarifCuciSetrika = 7000;

void dataPelanggan() {
    cout << "Masukan Nama Pelanggan : ";
    getline(cin, nama);
    cout << "Masukan No. HP : ";
    cin >> noHp;
    cout << "Selamat datang, " << nama << "!\n";
}

void garis() {
    for (int i = 0; i < 30; i++) cout << "=";
    cout << endl;
}

void tampilkanTarif() {
    cout << "\nTarif Laundry per Kg:\n";
    cout << "Cuci + Setrika: Rp " << tarifCuciSetrika << "/kg\n";
    cout << "Cuci Biasa: Rp " << tarifCuciBiasa << "/kg\n";
    garis();
}

int hitungCuciSetrika(int berat) {
    return berat * tarifCuciSetrika;
}

int hitungCuciBiasa(int berat) {
    return berat * tarifCuciBiasa;
}

int main() {
    int berat, total;

    dataPelanggan();
    garis();

    cout << "\nPilih Jenis Layanan :\n";
    cout << "1. Cuci + Setrika\n2. Cuci Biasa\n";
    cout << "Pilihanmu = ";
    cin >> pilihan;
    garis();

    if (pilihan == 1) {
        cout << "Pilihanmu adalah Cuci + Setrika\n";
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;
        total = hitungCuciSetrika(berat);
        cout << "Biaya Laundry = Rp " << total << endl;
        cout << "Detail: " << berat << " kg x Rp " << tarifCuciSetrika << endl;
    } else if (pilihan == 2) {
        cout << "Pilihanmu adalah Cuci Biasa\n";
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;
        total = hitungCuciBiasa(berat);
        cout << "Biaya Laundry = Rp " << total << endl;
        cout << "Detail: " << berat << " kg x Rp " << tarifCuciBiasa << endl;
    } else {
        cout << "Pilihan tidak valid!\n";
    }
    garis();

    tampilkanTarif();
    return 0;
}
