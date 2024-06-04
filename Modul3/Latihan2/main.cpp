#include <iostream>

using namespace std;

int main()
{
    int hari;
    cout << "masukkan nomor hari (1..7) : ";
    cin >> hari;

    switch(hari){
    case 1 :
        cout <<"Hari ke-"<<hari<<" adalah hari minggu";
        break;
    case 2 :
        cout <<"Hari ke-"<<hari<<" adalah hari senin";
        break;
    case 3 :
        cout <<"Hari ke-"<<hari<<" adalah hari selasa";
        break;
    case 4 :
        cout <<"Hari ke-"<<hari<<" adalah hari rabu";
        break;
    case 5 :
        cout <<"Hari ke-"<<hari<<" adalah hari kamis";
        break;
    case 6 :
        cout <<"Hari ke-"<<hari<<" adalah hari jum'at";
        break;
    case 7 :
        cout <<"Hari ke-"<<hari<<" adalah hari sabtu";
        break;
    default:
        cout << "Tidak terdapat hari ke-"<<hari;
    }
    return 0;
}
