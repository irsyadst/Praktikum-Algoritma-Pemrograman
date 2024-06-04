#include <iostream>
#include <cstdlib>
#include <limits.h>
using namespace std;
int kotak[10];
bool no1 = false;
int menupilih(int x){
    int isi;
    if(x == 1){
        no1 = true;
        cout << "\nOpsi input array\n";
        for(int i = 0 ; i < 10; i++){
            cout << "Masukan array ke " << i+1 << "\t: ";
            cin >> isi ;
            kotak[i] = isi;
            }
            cout << "Array berhasil terisi";
    }else if ( x == 2 && no1 == true){
        cout <<"\nOpsi tampil array\n";
        cout << "Isi array mu : ";
        for(int z = 0 ; z < 10 ; z++){
        cout << kotak[z] ; if(z < 9) cout << ",";
        }
    }else if( x == 3 && no1 == true){
        int minim = INT_MAX;
        cout << "Nilai terkecil dari array : ";
        for(int j = 0 ; j < 10 ; j++){
            minim = min(minim,kotak[j]);
            cout << kotak[j] ; if(j < 9) cout << ",";
        }
        cout << " adalah " << minim;
    }else if( x == 4 && no1 == true){
        int maks = 0;
        cout << "Nilai terbesar dari array : ";
        for(int j = 0 ; j < 10 ; j++){
            maks = max(maks,kotak[j]);
            cout << kotak[j] ;if(j < 9) cout << ",";
        }
        cout << " adalah " << maks;
    }else if( x == 5 && no1 == true){
        float rata = 0,total = 0;
        cout << "Rata-rata dari array : ";
        for(int y = 0 ; y < 10 ; y++){
            total = total + kotak[y];
            cout << kotak[y] ;if(y < 9) cout << ",";
        }
        rata = total/10;
        cout << " adalah " << rata;
    }else if( x == 6){
        exit;
    }else if(x > 6 || x <= 0){
            cout << "Pilihan tidak terdaftar";
    }else if( x != 1 && no1 == false) {
            cout << "Anda belum mengisi array";
    }
}
int main()
{
    int pilih;
    bool keluar = false;

    cout << "\tMenu\n\n";
    cout <<"1. Input Array\n";
    cout <<"2. Tampil Array\n";
    cout <<"3. Cari Nilai Minimum\n";
    cout <<"4. Cari Nilai Maksimum\n";
    cout <<"5. Hitung Rata-rata\n";
    cout <<"6. Keluar\n";
    do{
        cout <<"\nMasukan pilihan : ";
        cin >> pilih;
        menupilih(pilih);
        if( pilih == 6){
        keluar = true;
        }
    }while( !keluar );
    return 0;
}
