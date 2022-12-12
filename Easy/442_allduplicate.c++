#include <iostream>
using namespace std;


int allDuplicate(int *arr, int n){

    int ans = 0 ;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    cout<<ans;
}


int main(){

    // cout<< "Welcome" <<endl;
    int n =8 ;
    int arry[n] = {4,3,2,7,8,2,3,1};

    allDuplicate(arry, n);

    return 0;
}