#include <iostream>
using namespace std;

// Ques:-)Given an integer number n, return the difference between the product of its digits and the sum of its digits.

void subtractProductAndSum(int n)
{
    // int n = 12;
    int sum = 0;
    int product = 1;

    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    // cout << sum << endl;
    // cout << product << endl;
    int result = product - sum;
    cout << result;
}

int main()
{
    subtractProductAndSum(320);

    return 0;
}