#include <iostream>
using namespace std;
int indeks, maks=0, daftar_bilangan[10]={5,6,9,10,44,32,30,3,35,12};
int main()
{
    for (indeks=0;indeks<10;indeks++){
        if (daftar_bilangan[indeks]>maks)
        {
            maks=daftar_bilangan[indeks];
        }
    }
    cout<< "Nilai Maksimum : "<<maks<<endl;
    return 0;
}
