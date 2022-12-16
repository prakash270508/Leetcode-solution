#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/search-insert-position/?envType=study-plan&id=binary-search-i
// Question :-) Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

int searchInsert(int *nums, int target, int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int index = 0;

    while (s <= e)
    {

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
            index = mid;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
            index = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return index;
}

int main()
{

    int n = 4;
    int nums[n] = {1, 3, 5, 6};
    int target = 2;

    cout << searchInsert(nums, target, n);

    return 0;
}