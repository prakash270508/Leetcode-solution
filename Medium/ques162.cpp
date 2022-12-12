#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/find-peak-element/description/
// Question :-) Given a 0-indexed integer numsay nums, find a peak element, and return its index. If the numsay contains multiple peaks, return the index to any of the peaks

int findPeakElement(int *nums, int n)
{
    // if( n == 1){
    //     return nums[0];
    // }

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[mid] < nums[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    if (nums[s - 1] > nums[s + 1])
    {
        return nums[s - 1];
    }
    else if (nums[s - 1] < nums[s + 1])
    {
        return nums[s + 1];
    }else if ( s == 1)
    {
        return 0;
    }
    
}

int main()
{

    int n = 4;
    int nums[n] = {1, 3, 5, 4, 2};  
    // int n = 1;
    // int nums[n] = {1};

    // int n = 2;
    // int nums[n] = {2,1};

    cout << findPeakElement(nums, n);

    return 0;
}