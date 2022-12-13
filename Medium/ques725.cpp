#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/find-pivot-index/submissions/859124273/
// Question :-) Given an array of integers nums, calculate the pivot index of this array.

int pivotIndex(int* nums,  int n){

    int pivot = 0 ; 
        int right_sum  = 0 ;
        int left_sum  = 0 ;

        for(int i=1; i<n; i++){
            right_sum +=nums[i];
        }
        while(pivot != n){

            if(right_sum == left_sum){
                return pivot;
            }
            else
            {
                left_sum+=nums[pivot];
                pivot++;
                if(pivot != n){
                    right_sum-=nums[pivot] ;
                }
            }

        }
        return -1;

}

int main(){

    int n = 6;
    int arr[n] ={1,7,3,6,5,6};
    cout<<"The pivot index of guven array is "<<pivotIndex(arr, n) ;

    return 0;
}