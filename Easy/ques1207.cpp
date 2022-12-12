#include <iostream>
using namespace std;

// Ques 1207:-)Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

bool uniqueOccurrences(int *arry, int n)
{
    int unique = 0;

    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arry[i];
    }

    if (unique == 0)
    { 
        return false;
    }else{
        return true;
    }
    

}

int main()
{

    // cout<<"Welcome to unique number occurance question."<<endl;
    int n = 9;
    int arry[n] = {1, 2, 2, 1,4,9,9};

    // cout << uniqueOccurrences(arry, n);

    bool found = uniqueOccurrences(arry, n);

    if (found)
    {
        cout<<true ;
    }else{
        cout<<false;
    }

    return 0;
}