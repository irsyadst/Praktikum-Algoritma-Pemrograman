#include <iostream>

using namespace std;
int main()
{
   int x, y, i, pangkat =1;

   cout << "Masukkan Bilangan : ";
   cin >> x;

   cout << "Masukkan Pencacah : ";
   cin >> y;

    for(i =1; !(i>y); i++)
    {
        pangkat = pangkat*x;
    }
   cout << "Hasil Pangkat     : "<< pangkat << endl;
}
