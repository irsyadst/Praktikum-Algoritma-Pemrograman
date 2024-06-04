#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char karakter;

    cout << "Masukkan sebuah karakter : ";
    karakter = getch();
    cout << "\nHasil fungsi getch " << karakter << endl;

    cout << "Masukkan sebuah karakter : ";
    karakter = getche();
    cout << "\nHasil fungsi getche " << karakter << endl;

    return 0;
}
