#include <iostream>

using namespace std;
void select_sort (int arr[], int n){
    int pos_min, temp;

    for (int i= 0; i< n-1; i++){
        pos_min = i;

        for (int j = i+1; j<n; j++){
            if (arr[j]< arr[pos_min])
                pos_min = j;
        }
        if (pos_min != i ){
            temp = arr[i];
            arr[i] = arr [pos_min];
            arr [pos_min]= temp;

        }
    }
}
 void print_array(int a[], int length){
    for (int i = 0; i< length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}


int main()
{
    int length = 6;
    int a[length] = {22,10,15,3,8,2};

    select_sort(a, length);
    print_array(a, length);
    cout << "Hello world!" << endl;
    return 0;
}
