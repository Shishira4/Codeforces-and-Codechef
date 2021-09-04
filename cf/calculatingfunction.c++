//https://codeforces.com/problemset/problem/486/A
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,sum=0;
    cin >> n;
    if(n%2==0)
    {
        sum = n>>1;
    }
    else
    {
        sum = (n>>1) -n;
    }
    cout << sum;
    return 0;
}