#include <iostream>
using namespace std;

// Ques Link:-)https://leetcode.com/problems/guess-number-higher-or-lower/description/?envType=study-plan&id=binary-search-i
// Question :-) Guess Number Higher or Lower

// Note =) It is mendentory to visit link to solve problem U cann't understand anything Here

int guess(int n){

}

int guessNumber(int n)
{

    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (guess(mid) == 0)
        {
            return mid;
        }
        else if (guess(mid) == -1)
        {
            e = mid - 1;
        }
        else if (guess(mid) == 1)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int main(){

    cout<< "Visit Link for solution " ;

    return 0;
}