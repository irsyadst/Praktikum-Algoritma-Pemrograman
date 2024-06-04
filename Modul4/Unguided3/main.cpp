#include <iostream>
using namespace std;

int main(){
	int hasil;
	int input1, input2;
	cout << "Masukkan Bilangan Ke-1 : ";
	cin >> input1;
	cout << "Masukkan Bilangan Ke-2 : ";
	cin >> input2;
	hasil = input1;
	while(hasil%input2!=0){
		hasil = hasil + input1;
	}

	cout << "KPK : " << hasil;
}
