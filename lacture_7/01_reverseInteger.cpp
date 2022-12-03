#include <iostream>
using namespace std;

int reverseNum(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int reminder = num % 10;
        // if ((ans > INT16_MAX/10) || (ans < INT16_MIN/10))
        // {
        //     return 0;
        // }
        
        ans = (ans * 10) + reminder;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int num = 12345;
    cout<<reverseNum(num);
}