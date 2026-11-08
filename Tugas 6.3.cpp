#include <iostream>
#include <string>
using namespace std;
 
const string NAMA = "Onesimus Desco Natalino";
const string NIM  = "2618015";
 
int main() {
    int level = 1;
    int jawaban;
    bool lanjut = true;
 
    cout << "===== " << NIM << " || " << NAMA << " =====\n";
    cout << "===== PROGRAM GAME MATEMATIKA =====\n\n";
 
    do {
        int kelipatan = level * 5;
        int hasil = level + kelipatan;
 
        cout << "Level " << level << endl;
        cout << "Berapa hasil dari " << level << " + " << kelipatan << " ? ";
        cin >> jawaban;
 
        if (jawaban == hasil) {
            cout << "Benar! Naik level!\n\n";
            level++;
        } else {
            cout << "Game Over\n";
            lanjut = false;
        }
    } while (lanjut && level <= 5);
 
    if (lanjut) {
        cout << "Selamat! Kamu menyelesaikan semua level!\n";
    }
 
    return 0;
}