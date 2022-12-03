#include <iostream>
using namespace std;

int mini(int arr[], int size){
    int mini = INT16_MAX;
    for(int i = 0; i<size; i++){
        if(mini>arr[i]){
            mini = arr[i];
        }
    }
    return mini;
}
int maxi(int arr[], int size){
    int maxi = INT16_MIN;
    for(int i = 0; i<size; i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[5] = {11,2,3,4,10};
    int size = 5;
    cout<<"this is minimum Number :- "<<mini(arr,size)<<endl;
    cout<<"this is miximum Number :- "<<maxi(arr,size);

}