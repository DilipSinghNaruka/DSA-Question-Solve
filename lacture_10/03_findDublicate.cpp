#include<iostream>
using namespace std;

int findDuplicate(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = arr[i]^ans;
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    return ans;
    

}

int main(){
    int arr[5] = {1,2,3,4,4};
    int size = 5;
    cout<<findDuplicate(arr,size);
}