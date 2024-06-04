#include <iostream>

using namespace std;

int main()
{
    int bil;
    long faktorial =1;

    cout<<"Masukan bilangan faktorial:";
    cin >> bil;
    cout<<bil<<"! = ";

    while (bil >=1){

        faktorial=faktorial*bil;
        if (bil != 1){

            cout<<bil<<" x ";
        }else {
        cout <<"1 = ";
    }
    bil--;
    }
    cout<<faktorial;
    return 0;
}
