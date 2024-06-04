#include <iostream>
#include <math.h>
using namespace std;
int x, y;
int penjumlahan(int x, int y) {
    return x + y;
    }
int pengurangan(int x, int y) {
    return x - y;
    }
int perkalian(int x, int y) {
    return x * y;
    }
int pembagian(int x, int y){
    return x / y;
    }
int pangkat(int x, int y) {
    float hasil = 1;
    hasil = pow(x,y);
    return hasil;
}

int main(){
 menu:
	int pil;
	cout<<"\tKALKULATOR\n"
        <<"1. Penjumlahan\n"
        <<"2. Pengurangan\n"
        <<"3. Perkalian\n"
        <<"4. Pembagian\n"
        <<"5. Pangkat\n"
        <<"6. Keluar\n\n"
        <<"Masukan Pilihan  : ";cin>>pil;
	if(pil<6 && pil >0){
        cout<<"Bilangan pertama : ";
        cin>>x;
        cout<<"Bilangan kedua   : ";
        cin>>y;
	}

	switch(pil){
        case 1 : cout<<"Hasil Penjumlahan: "<<penjumlahan(x,y)<<endl;
                system("pause");
                system("cls");
                goto menu;
			break;
		case 2 : cout<<"Hasil Pengurangan: "<<pengurangan(x,y)<<endl;
                system("pause");
                system("cls");
                goto menu;;
			break;
		case 3 : cout<<"Hasil Perkalian  : "<<perkalian(x,y)<<endl;
                system("pause");
                system("cls");
                goto menu;
			break;
		case 4 : cout<<"Hasil Pembagian  : "<<pembagian(x,y)<<endl;
                system("pause");
                system("cls");
                goto menu;
			break;
		case 5 : cout<<"Hasil Pangkat    : "<<pangkat(x,y)<<endl;
                system("pause");
                system("cls");
                goto menu;
			break;
        case 6 :
            break;
		default :
			cout<<"Angka Yang Anda Masukkan Salah!"<<endl;
                system("pause");
                system("cls");
                goto menu;
	}
}
