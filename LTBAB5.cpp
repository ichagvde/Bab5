#include <iostream>
#include <string>
using namespace std;
const float phi=3.14;

int main() {
    string nama;
    int pilihan, nim;
    float sisi, r, panjang, lebar, alas, tinggi, luas;

    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan NIM : ";
    cin >> nim;

    cout << "\n=== MENGHITUNG LUAS BANGUN DATAR ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Pilih bangun datar: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan sisi : ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi = " << luas << endl;
            break;

        case 2:
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang = " << luas << endl;
            break;

        case 3:
            cout << "Masukkan jari jari : ";
            cin >> r;
            luas = phi * r * r;
            cout << "Luas Lingkaran = " << luas << endl;
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}