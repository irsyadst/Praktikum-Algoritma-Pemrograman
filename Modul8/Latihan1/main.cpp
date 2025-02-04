#include <iostream>

using namespace std;

int sequential_search(double data[],int n, double k){
    int posisi,i,ketemu;
    if(n<=0){
        posisi = -1;
    }
    else{
        ketemu = 0;
        i =1;
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
int main(){
    int n=7;
    double data[]={1.3,0.9,3.2,2.1,5.8,7.7,9.2};
    double k=0.9;
    int posisi = sequential_search(data,n,k);
    if(posisi!=-1){
        cout<<"Kunci "<<k<<" ditemukan pada indeks ke-"<<posisi;
    }
    else{
        cout<<"Kunci "<<k<<" tidak di temukan";
    }
    return 0;
}
