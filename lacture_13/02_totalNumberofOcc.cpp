#include <iostream>
using namespace std;

// Total Number of occurence


int first(int arr[], int n, int k)
{       // ans = -1 bcz if k is not available in arr than we return -1
    int ans = -1;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int last(int arr[], int n, int k)
{
    int ans = -1;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}



int main()
{
    int arr[5] = {1, 3, 3, 3, 4};
    int n = 5;
    int k = 3;

    int first1 = first(arr,n,k);
    int last1 = last(arr,n,k);

    cout<<last1-first1+1;
}