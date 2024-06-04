#include <iostream>
using namespace std;

int main (){
    int i, Array[5];

    for(i=0;i<5;i++){
            cout<<"Masukkan bilangan "<<i+1<<" : ";
            cin>>Array[i];
    }
    cout<<"Bilangan yang ganjil adalah "<<endl;
    for(i=0;i<5;i++){
            if(Array[i]%2!=0){
                cout<<Array[i]<<endl;
        }
    }
return 0;
}
