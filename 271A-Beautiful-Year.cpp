#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    s=s+1;
    int a=s/1000,b=(s/100)%10,c=(s/10)%10,d=s%10;
    while(a==b||a==c||a==d||b==c||b==d||c==d)
    {
        s=s+1;
        a=s/1000,b=(s/100)%10,c=(s/10)%10,d=s%10;
    }
    cout << s;
    return 0;
}
/*It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.*/