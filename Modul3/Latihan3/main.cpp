#include <iostream>

using namespace std;

int main()
{
    float suhu;
    cout << "Masukkan Suhu : ";
    cin >> suhu;

    if(suhu<=0){
        cout << "Pada suhu "<<suhu<<" derajat celsius, air berwujud es";
    }
    else if(suhu>0 && suhu <100){
        cout << "Pada suhu "<<suhu<<" derajat celsius, air berwujud cair";
    }
    else{
        cout << "Pada suhu "<<suhu<<" derajat celsius, air berwujud gas";
    }
    return 0;
}
