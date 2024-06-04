#include <iostream>

using namespace std;
int fungsi(int bil){
 	 	if(bil % 2==0){
 	 	 	cout << "Bilangan yang anda masukkan genap";
 	 	}else{
 	 	 	cout << "Bilangan yang anda masukkan ganjil";
 	 	}
 	}
int main () {
    int bil;
 	cout << "Masukkan bilangan : ";  	cin >> bil;  	fungsi(bil);  	return 0;
}
