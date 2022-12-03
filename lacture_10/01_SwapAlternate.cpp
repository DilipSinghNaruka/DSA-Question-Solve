#include <iostream>
using namespace std;

int swapalternate(int arr[], int size){
    for (int i = 0; i < size; i = i+2)
    {
        swap(arr[i], arr[i+1]);
    }

}

int main(){
    // int arr[6] ={1,2,3,4,5,6};
    int arr[5] ={1,2,3,4,5};
    // int size = 6;
    int size = 5;
    swapalternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    

}