#include <iostream>
using namespace std;

//Brtue method

int findTheDistanceValue(int *arr1, int *arr2,int n1, int n2, int d)
{

    int count = 0;

    for (int i = 0; i < n1; i++)
    {

        bool found = false;
        for (int j = 0; j < n2 && !found; j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                found = true;
            }
        }
        if (!found)
        {
            count++;
        }
    }
    return count;
}

int main(){

    int n1 = 3;
    int n2 = 4;

    int arr[n1] = {4,5,8};
    int arr2[n2] = {10,9,1,8};

    cout<<findTheDistanceValue(arr, arr2, n1, n2, 2);

    return 0;
}
