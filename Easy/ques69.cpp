#include <iostream>
using namespace std;

int mySqrt(int x)
{

    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    long long int ans = 0;

    while (s <= e)
    {
        long long int squre = mid * mid;
        if (squre == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{   

    int n =4;

    cout<<"The square root of given number is " <<mySqrt(n);

    return 0;
}