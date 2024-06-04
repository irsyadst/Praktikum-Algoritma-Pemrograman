#include <iostream>
using namespace std;
int main()
{
    int cari,daftar[5] = {1,2,3,4,5} ,cek=0, baru[10];
    cout << "Masukan bilangan : ";
    cin >> cari;
    for(int i = 0 ; i < 5; i++){
        if( cari == daftar[i] ){
            cek++;
            baru[cek] = i;
        }
    }
    if(cek){
        cout << "Bilangan anda tersimpan di urutan array ke ";
        for(int y = 1 ; y <= cek ; y++){
            cout << baru[y]+1; if(y == cek-1) cout << " dan "; if( y <= cek-2) cout << ",";
        }
    }else{
        cout << "Bilangan anda tidak tersimpan";
    }
    cout <<endl;
    return 0;
}
