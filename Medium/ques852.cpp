#include <iostream>
using namespace std;

// Ques:-)https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Explanation ==) ;

int peakIndexInMountainArray(int*arr , int n)
{

    int s= 0, e = n -1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }else{
                e = mid ;
            }
            mid = s + (e-s)/2 ;
        }
        return s ;
}

int main()
{

    int n = 4 ;
    int arr[n] = {1,3,5,2};

    cout<<peakIndexInMountainArray(arr, n); 

    return 0;
}

// Solved In JavaScript =) https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

// StackBlitz Link =)https://stackblitz.com/edit/js-rxwhsg?file=index.js