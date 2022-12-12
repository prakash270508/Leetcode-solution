#include <iostream>
using namespace std;

// Ques:-)Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Explanation ==) Reverse the number except negatives ;

int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {

        int digit = x % 10;

        if (ans > (INT8_MAX / 10) || ans < (INT8_MIN / 10))
        {
            cout<<" 0 ";
        }

        ans = (ans * 10) + digit;

        x = x / 10;
    }
    cout << ans << " ";
}

int main()
{

    reverse(-123);

    return 0;
}