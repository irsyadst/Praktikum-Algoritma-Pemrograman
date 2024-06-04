#include <iostream>

using namespace std;
int s, hasil;
int keliling_persegi(int s){
    hasil = 4 * s;
    return hasil;
}
int luas_persegi(int s){
    hasil = s * s ;
    return hasil;
}
int main()
{
    cout << "Masukkan Nilai Sisi : ";cin>>s;
    cout << "Keliling Persegi: "<<keliling_persegi(s)<<endl;
    cout << "Luas Persegi : "<<luas_persegi(s)<<endl;
    return 0;
}
