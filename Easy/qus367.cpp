#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/valid-perfect-square/description/?envType=study-plan&id=binary-search-i
// Question :-) Given a positive integer num, write a function which returns True if num is a perfect square else False.

bool isPerfectSquare(int num)
{

    int s = 0;
    int e = num;
    long long int mid = s + (e - s) / 2;
    bool ans = false;
    while (s <= e)
    {
        long long int squre = mid * mid;
        if (squre == num)
        {
            return true;
        }
        else if (mid * mid > num)
        {
            e = mid - 1;
        }
        else if (mid * mid < num)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){

    cout<<bool(isPerfectSquare(16)) ;


    return 0;
}