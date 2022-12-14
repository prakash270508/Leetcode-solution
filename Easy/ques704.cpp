#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/find-peak-element/description/
// Question :-) Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

int search(int *nums, int target, int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    if (n== 1)
    {
        if (nums[n- 1] == target)
        {
            return mid;
        }
        else
        {
            return -1;
        }
    }

    while (s <= e)
    {
        if(n==2){
            e= n;
        }

        if (nums[mid] == target)
        {
            return mid;
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

    return -1;
}

int main(){

    int n = 6;
    int arr[n] = {-1,0,3,5,9,12};


    cout<<search(arr, 3, n)<<endl ;


    return 0;
}