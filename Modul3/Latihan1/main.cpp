#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Sebuah Bilangan : ";
    cin >> nilai;

    if(nilai>0){
        cout << "Bilangan yang anda masukkan adalah bilangan positif";
    }
    else if(nilai==0){
        cout << "Bilangan yang anda masukkan adalah bilangan netral";
    }
    else{
        cout << "Bilangan yang anda masukkan adalah bilangan negatif";
    }
    return 0;
}
