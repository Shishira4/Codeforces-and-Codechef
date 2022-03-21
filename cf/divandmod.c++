//https://codeforces.com/contest/1650/problem/B
#include<iostream>
#include <algorithm>
using namespace std;
void logic()
{
    int l, r, a,ans,x, max_value=0;
    cin >> l >> r >> a;
    for(int i=l; i<=r;i++)
    {
        ans = (i/a) + (i%a);
        max_value = max(ans,max_value);
    }
    cout << max_value << "\n";
}
int main()
{
    int test_cases;
    cin>> test_cases;
    while (test_cases--)
    {
        logic();
    }
    
    return 0;
}