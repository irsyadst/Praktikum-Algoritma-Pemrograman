#include <iostream>

using namespace std;
void bubble_sort (double arr[], int length){
   bool not_sorted = true;
   int j = 0;
   int tmp;

        while (not_sorted){
            not_sorted = false;
            j++;
            for (int i = 0; i<length - j; i++){
                if(arr[i]> arr[i+1]){
                    tmp = arr[i];
                    arr[i]= arr[i+1];
                    arr[i+1] = tmp;
                    not_sorted = true;
                }
            }

        }
    }
    void print_array(double a[], int length){
    for (int i = 0; i< length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    int length = 5;
    double a[length] = {22.1,15.3,8.2,33.21,99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
