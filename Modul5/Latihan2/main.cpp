#include <iostream>

using namespace std;
string nama, daftar_mahasiswa[100];
int jml_mahasiswa,i;
int main()
{
    cout<<"Masukan Jumlah Nama Mahasiswa Yang Akan Di Simpan : ";
    cin>>jml_mahasiswa;
    //untuk input nama
    for(i=0;i<jml_mahasiswa;i++){
        cout<<"Masukkan Nama Mahasiswa : ";
        cin>>nama;
        daftar_mahasiswa[i]=nama;
    }
    //untuk cetak nama
        cout<<"Maka Yang Sudah Anda Simpan Adalah:"<<endl;
        for(i=0;i<jml_mahasiswa;i++){
            cout<<"Index Ke"<<i+1<<"="<<daftar_mahasiswa[i]<<endl;
        }
    return 0;
}
