#include <iostream>

using namespace std;

int main()
{
    //membuat matriks dengan array
    int A[3][5] = {{10,20,30,40,50},{1,2,3,4,5},{11,22,33,44,55}};
    int B[3][5] = {{10,20,30,40,50},{1,2,3,4,5},{11,22,33,44,55}};
    int C[3][5]; //untuk matrik penjumlahan
    int x,y;

    //menampilkan matriks A
    cout << "Matriks A : " << endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            cout<< A[x][y]<<" ";
        }
        cout <<endl;
    }

    //menampilkan matriks B
    cout << "\nMatriks B : " << endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            cout<< B[x][y]<<" ";
        }
        cout<< endl;
    }

    // Penjumlahan matriks
    cout << "\nMatriks Penjumlahan : \n";
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            C[x][y] = A[x][y] + B[x][y];
            cout << A [x][y] << "+" << B [x][y]<< "=" << C[x][y]<< " ";
    }
        cout<<endl;
    }
    return 0;
}
