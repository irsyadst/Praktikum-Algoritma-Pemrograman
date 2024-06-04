#include <iostream>
using namespace std;
int main(){
    int x, y, A[3][3], B[3][3], C[3][3];
    cout<<"Berikan Matriks Pertama (3x3): \n\n";
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            cin>>A[x][y];
        }
    }
    cout<<endl;
    cout<<"Berikan Matriks Kedua (3x3): \n\n";
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            cin>>B[x][y];
        }
    }
    cout<<"\nMatriks Penjumlahan : \n";
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            C[x][y]=A[x][y]+B[x][y];
        }
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            cout<<" "<<A[x][y];
        }
        if(x==1){
            cout<<" +";
        }
        else
        cout<<"\t";
        for(y=0; y<3; y++){
            cout<<" "<<B[x][y];
        }
        if(x==1){
            cout<<" =";
        }
        else
        cout<<"\t";
        for(y=0; y<3; y++){
            cout<<" "<<C[x][y];
        }
    cout<<endl;
    }
    for(x=0; x<3; x++){
        for (y=0; y<3; y++){
            cout << A [x][y] << "+" << B [x][y]<< "=" << C[x][y]<< " ";
        }
        cout<<endl;
    }
    cout << "\nMatriks Pengurangan : \n";
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            C[x][y]=A[x][y]-B[x][y];
        }
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            cout<<" "<<A[x][y];
        }if(x==1){
            cout<<" -";
        }else
        cout<<"\t";
        for(y=0; y<3; y++){
            cout<<" "<<B[x][y];
        }if(x==1){
            cout<<" =";
        }else
        cout<<"\t";
        for(y=0; y<3; y++){
            cout<<" "<<C[x][y];
        }
    cout<<endl;
    }
    for(x=0; x<3; x++){
        for (y=0; y<3; y++){
            cout << A [x][y] << "-" << B [x][y]<< "=" << C[x][y]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
