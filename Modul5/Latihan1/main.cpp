#include <iostream>

using namespace std;

int main()
{
/*    int TabJumlahHari[12];
    float TabNilai[15];
    char TabHuruf[100];
    string TabKata[100];
    point TabTitik[20];

    char DaftarHuruf[5]={'a','i','u','e','o'};
    cout<<DaftarHuruf[0]<<endl;
    cout<<DaftarHuruf[1]<<endl;
    cout<<DaftarHuruf[2]<<endl;
    cout<<DaftarHuruf[3]<<endl;
    cout<<DaftarHuruf[4]<<endl;

    for(int i=0;i<5;i++){
        cout<<DaftarHuruf[i]<<endl;
    }*/
    /*int TabInt[10];
    for(int i=0;i<10;i++){
        TabInt[i]=i*10;
    }
    for(int i=0;i<10;i++){
        cout<<TabInt[i]<<endl;
    }
    //Array dua dimensi
    int baris, kolom, matriks[2][4]={{1,2,3,4},{5,6,7,8,}};
    for(baris=0;baris<2;baris++){
        for(kolom=0;kolom<4;kolom++){
            cout<<matriks[baris][kolom]<<" ";
        }
        cout<<endl;
    }*/
    string bulan[]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    int masukkan;
    cout<<"Masukkan Nomor Bulan : ";
    cin>>masukkan;
    cout<<"Bulan Yang Anda Masukkan Adalah : "<<bulan[masukkan-1]<<endl;

    return 0;
}
