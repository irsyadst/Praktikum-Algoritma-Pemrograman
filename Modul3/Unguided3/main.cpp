#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int pilihan;
    ulang:
    cout << "<< MENU MENGHITUNG BIAYA OPERASI >>\n" << endl;
    cout << "1. Menghitung Biaya Operasi Mata" << endl;
    cout << "2. Menghitung Biaya Operasi Jantung\n" << endl;

    cout << "Masukkan Pilihan : ";
    cin >> pilihan;
    if(pilihan == 1) {
        cout << "\n<< JENIS PENYAKIT MATA >>\n" << endl;
        cout << "1. Katarak" << endl;
        cout << "2. Plus / Minus" << endl;
        cout << "3. Silinder\n" << endl;

        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "\nBiaya Operasi Mata Katarak = Rp. 7.500.000." << endl;
                break;
            case 2:
                cout << "\nBiaya Operasi Mata Plus / Minus = Rp. 5.000.000." << endl;
                break;
            case 3:
                cout << "\nBiaya Operasi Mata Silinder = Rp. 4.000.000." << endl;
                break;
            default:
                cout << "\nKode salah!" << endl;
                break;
        }
    } else if(pilihan == 2) {
        cout << "\n<< JENIS PENYAKIT JANTUNG >>\n" << endl;
        cout << "1. Jantung Koroner" << endl;
        cout << "2. Katup Jantung" << endl;
        cout << "3. Otot Jantung\n" << endl;

        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "\nBiaya Operasi Jantung Koroner = Rp. 500.000.000." << endl;
                break;
            case 2:
                cout << "\nBiaya Operasi Katup Jantung = Rp. 350.000.000." << endl;
                break;
            case 3:
                cout << "\nBiaya Operasi Otot Jantung = Rp. 450.000.000." << endl;
                break;
            default:
                cout << "\nKode salah!" << endl;
                break;
        }
    } else {
        cout << "\nKode salah!" << endl;
        system("pause");
        system("cls");
        goto ulang;

    }
    cout << endl;
    return 0;
}
