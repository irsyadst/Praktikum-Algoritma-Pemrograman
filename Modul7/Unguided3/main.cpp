#include <iostream>
using namespace std;
void isi(char arr[], int length){
    for(int i=0; i < length; i++){
        cout<<"Karakter ke-" << i+1 << ": ";
        cin>>arr[i];
    }
}
void asc (char arr[],int length){
    int i,j;
    char tmp;
    for (i=1;i<length;i++){
        j=i;
        while (j>0 && arr[j-1]>arr[j]){
            tmp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=tmp;
            j--;
        }
    }
}
void desc (char arr[], int length){
   bool not_sorted = true;
   int j = 0;
   char tmp;

        while (not_sorted){
            not_sorted = false;
            j++;
            for (int i = 0; i<length - j; i++){
                if(arr[i]< arr[i+1]){
                    tmp = arr[i];
                    arr[i]= arr[i+1];
                    arr[i+1] = tmp;
                    not_sorted = true;
                }
            }
        }
    }
void print_array(char arr[],int length){
    for (int i=0;i<length;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int length;
    char x;

    cout << "Input <n> : ";
    cin >> length;
    char arr[length];
    isi(arr,length);
    cout<<"Urutan karakter sebelum sorting:\n";
    print_array(arr, length);

    cout<<"Urutan karakter setelah ascending sort:\n";
    asc(arr, length);
    print_array(arr, length);

    cout << "Urutan karakter setelah descending sort:\n";
    desc(arr, length);
    print_array(arr, length);

    return 0;
}
