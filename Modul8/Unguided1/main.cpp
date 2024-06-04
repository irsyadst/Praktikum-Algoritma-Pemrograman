#include <iostream>
#include <conio.h>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

int sequen(string data[],int n, string k){
    int posisi,i,ketemu;
    if(n<=0){
        posisi = -1;
    }
    else{
        ketemu = 0;
        i = 0;
        while((i<n-1)&&!ketemu){
            if(data[i]==k){
                posisi = i;
                ketemu = 1;
            }
            else{
                i++;
            }
            if(!ketemu){
                posisi = -1;
            }
        }
    }
    return posisi;
}
int main()
{
    int n = 10;
    string plat[]={"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP, R 007 TU",  "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    string k ;
    cout << "Masukkan Plat Nomor : ";
    getline(cin, k);
    transform(k.begin(), k.end(),k.begin(), ::toupper);
    int posisi = sequen(plat,n,k);
    if(posisi!=-1){
        cout<<"Plat Nomor "<<k<<" ditemukan pada indeks "<<posisi;
    }
    else{
        cout<<"Plat Nomor "<<k<<" tidak di temukan";
    }
    return 0;
}
