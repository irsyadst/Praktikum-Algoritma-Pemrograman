#include <iostream>

using namespace std;

int main()
{
    char huruf;
    int CekHurufVokal;
    cout << "Masukkan Huruf Vokal : ";
    cin >> huruf;
    CekHurufVokal = (
    huruf == 'a' || huruf == 'A' ||
    huruf == 'e' || huruf == 'E' ||
    huruf == 'i' || huruf == 'I' ||
    huruf == 'o' || huruf == 'O' ||
    huruf == 'u' || huruf == 'U'
  );
    if(CekHurufVokal)
        cout << "Huruf Yang Anda Adalah Huruf Vokal";
    return 0;
}
