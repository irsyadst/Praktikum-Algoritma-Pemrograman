#include <iostream>
using namespace std;

int function_binary_search (int data [], int n, int k) {
    int atas, bawah, tengah, posisi;
    bool ada;
    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;
    while (bawah <= atas) {
    tengah = (atas + bawah)/2;
        if(k == data[tengah]) {
            posisi = tengah;
            break;
        }
        else if(k < data[tengah]) atas = tengah - 1;
        else if(k > data[tengah]) bawah = tengah + 1;
    }
    return posisi;
}
void insertion_sort (int data[],int n){
    int i,j,tmp;

    for (i=1;i<n;i++){
        j=i;
        while (j>0 && data[j-1]>data[j]){
            tmp = data[j];
            data[j]=data[j-1];
            data[j-1]=tmp;
            j--;
        }
    }
}
void print_array(int data[],int n){
    for (int i=0;i<n;i++){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}
void dua(int data[], int n, int k){
    int baru[10], cek=0;
    for(int i = 0 ; i < n ; i++){
        if( k == data[i] ){
        cek++;
        baru[cek] = i;
        }
    }
    if(k){
        for(int y = 1 ; y <= cek ; y++){
            cout << baru[y]; if(y == cek-1) cout << " dan "; if( y <= cek-2) cout << ",";
        }
    }
        cout <<endl;
}
int main(){
    int n, posisi, k;
    cout << "Masukan Banyaknya bilangan = "; cin >> n;
    int data[n];
    for(int i=0; i<n; i++){
        cout << "Masukan elemen ke-"<<i+1<<" = ";cin >>data[i];
    }
    cout << "Sebelum disortir : ";
    print_array(data, n);
    insertion_sort(data, n);
    cout << "Setelah disortir : ";
    print_array(data, n);
    cout << "\nMasukkan angka yang dicari : "; cin >>k;


    posisi = function_binary_search(data, n, k);
    if(posisi != -1) {
        cout << "Ditemukan angka " << k << " di dalam indeks ke : "; dua(data, n, k);
    } else {
        cout << "Maaf angka " << k << " tidak ditemukan di dalam Array" << endl;
    }

    return 0;
}
