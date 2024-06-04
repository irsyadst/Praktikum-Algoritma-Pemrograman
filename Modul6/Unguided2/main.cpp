#include <iostream>

using namespace std;
//fungsi menghitung luas lingkaran
float luas_lingkaran(float r){
    float luas_lingkaran;
    luas_lingkaran = 3.14 *r*r;
    return luas_lingkaran;
    }
int main (){
    int r;
    cout << "Masukkan jari - jari : ";
    cin >> r;
    cout << "Luas lingkaran adalah "<<luas_lingkaran(r);
    return 0;
}
