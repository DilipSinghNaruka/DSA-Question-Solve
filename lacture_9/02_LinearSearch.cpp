#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(key==arr[i]){
            cout<<"This is Number:- "<< key<< " And this is Position in array :- "<<i;
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 4;
    linearSearch(arr, size, key);
}