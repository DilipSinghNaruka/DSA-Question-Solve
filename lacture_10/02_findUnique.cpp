#include <iostream>
using namespace std; 

int findUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = arr[i]^ans;
    }
    return ans;

}
int main(){
    int arr[7] = {1,2,3,3,4,2,1};
    int size = 7;
    cout<<findUnique(arr,size);


}