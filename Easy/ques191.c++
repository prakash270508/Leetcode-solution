#include <iostream>
using namespace std;

// Ques:-)Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
//Explanation ==) Count the nunber of 1 in bit;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n!=0)
    {
        //Checking last bit
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<count ;
}

int main()
{
    hammingWeight(00000000000000000000000000001011);

    return 0;
}