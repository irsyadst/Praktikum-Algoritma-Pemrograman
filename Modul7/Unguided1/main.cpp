#include <iostream>
#include <iomanip>

using namespace std;
void selectSort(double arr[], int n) {
    int pos_min;
    double temp;
    for (int i=0; i < n-1; i++) {
        pos_min = i;
        for (int j=i+1; j < n; j++) {
            if (arr[j] < arr[pos_min])
            pos_min=j;
        }
        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
            }
    }
}
 void print_array(double a[], int length){
    for (int i = 0; i< length; i++){
        cout <<setprecision(1)<<fixed<< a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    int length = 5;
    double a[length] = {3.8,2.9,3.3,4.0,2.4};
    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
    selectSort(a, length);
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
    return 0;
}
