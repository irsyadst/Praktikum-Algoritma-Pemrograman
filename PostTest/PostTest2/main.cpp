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
        cout<<data[i]<<" ";
    }
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
    int n, k;
    cout << "Masukan jumlah array pertama : "; cin >> n;
    int data1[n];
    for(int i=0; i<n; i++){
        cout << "elemen ke-"<<i+1<<" : ";cin >>data1[i];
    }



    cout << "Masukan jumlah array kedua : "; cin >> k;
    int data2[k];
    for(int i=0; i<k; i++){
        cout << "elemen ke-"<<i+1<<" : ";cin >>data2[i];
    }

    cout << "Hasil array pertama dan kedua setelah digabung : \n";
    print_array(data1, n);
    print_array(data2, k);
    insertion_sort(data1, n);
    insertion_sort(data2, k);
    cout << "\nHasil array pertama dan kedua setelah disortir : \n";
    print_array(data1, n);
    print_array(data2, k);
    return 0;
}
