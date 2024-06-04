#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double nilai;

    cout << "Masukkan bilangan desimal : ";
    cin >> nilai;

    cout << setiosflags (ios::fixed);
    cout << setprecision(2) << nilai << endl;
    return 0;
}
