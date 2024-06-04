#include <iostream>
 using namespace std ;

 int main()
 {
     int no;

    float ll, phi = 3.14,vt,s,r,t,vk ;
    cout<< "\t<<MENU<<\n";
    cout<< "\n1. Menghitung Volume Kubus\n";
    cout<< "2. Menghitung Luas Lingkaran\n";
    cout<< "3. Menghitung Volume Silinder\n";

    cout<< "\nPilih Nomor (1-3) : ";
    cin >> no ;

    switch (no){
case 1 :
    cout << "Panjang Sisi : ";
    cin >>s;
    vk = s*s*s;
    cout <<"Volume Kubus : "<<vk;
    break;
case 2 :
    cout << "Jari-Jari lingkaran : ";
    cin >> r;
    ll = phi*r*r;
    cout << "Luas Lingkaran : " <<ll;
    break;
case 3 :
    cout << "Jari-Jari lingkaran : ";
    cin >> r;
    cout<<"Tinggi Silinder : ";
    cin >>t;
    vt = phi*r*r*t;
    cout <<"Volume Tabung : "<<vt;
    break;
    }
}
