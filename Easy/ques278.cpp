#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/first-bad-version/submissions/861270445/
// Question :-) First bad version

bool isBadVersion(int n)
{
    // It was used in question so we have to check it.
}

int firstBadVersion(int n)
{

    int s = 1;
    int e = n;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isBadVersion(mid) == 1)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){

    cout<<"Check on main question on link" <<endl; 

    cout<<firstBadVersion(5);

    return 0;
}