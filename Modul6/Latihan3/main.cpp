#include <iostream>

using namespace std;
int x,y;
void nilai(int x, int y){
if(x>y){
    cout<<"Bilangan yang lebih besar : "<<x;
}else if(x=y){
    cout<<"Bilangan bernilai sama : ";
}else{
    cout<<"Bilangan yang lebih besar : "<<y;
}
}
int main()
{
    cout<<"Masukkan Nilai 1 : ";cin>>x;
    cout<<"Masukkan Nilai 2 : ";cin>>y;
    nilai(x,y);
    return 0;
}
