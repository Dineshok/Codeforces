/*For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.*/
#include <iostream>
using namespace std;
long long int nums(long long int a)
{
    long long int l=0;
    if(a%2==0)
    {
        l=a/2;
    }
    else if(a==1)
    {
        return -1;
    }
    else{
        l=-(a+1)/2;
    }

    
    return l;
}
int main(){
    long long int n;
    cin >> n;
    cout << nums(n);
}