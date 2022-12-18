#include <iostream>
using namespace std;

// EQues Link :-) https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/861749756/?envType=study-plan&id=binary-search-i
// Ques:-)Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

int searchRange(int * nums, int target, int n)
{

    int  result;
    int firstIndex = firstNumber(nums, target, n);
    int lastIndex = secondNumber(nums, target, n);
    // result.push_back(firstIndex);
    // result.push_back(lastIndex);
    return result;
}
int firstNumber(int * nums, int target, int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int position = -1;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            position = mid;
            e = mid - 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return position;
}
int secondNumber(int * nums, int target, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int position = -1;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            position = mid;
            s = mid + 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return position;
}

int main(){

    int n = 6 ;
    int nums[n] = {5,7,7,8,8,10};

    cout<<searchRange(nums, 8, n);

    return 0;
}
