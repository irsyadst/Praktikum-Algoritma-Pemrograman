#include <iostream>

using namespace std;
int s, hasil;
void keliling_persegi(int s){
    hasil = 4 * s;
    cout<<"Keliling Persegi = "<<hasil<<endl;
}
void luas_persegi(int s){
    hasil = s * s ;
    cout<<"Luas Persegi = "<<hasil;
}
int main()
{
    cout << "Masukkan Nilai Sisi : ";
    cin>>s;
    keliling_persegi(s);
    luas_persegi(s);
    return 0;
}
