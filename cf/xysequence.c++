//https://codeforces.com/contest/1657/problem/B
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    long long n, b, x, y, sum=0;
    cin >> n >> b >> x >> y;
    vector<long long> arr(n+1);
    arr[0]=0;
    for(int i=1; i<=n;i++)
    {
        arr[i]=arr[i-1]+x;
        if(arr[i]>b)
        {
            arr[i]=arr[i-1]-y;
        }
        //cout << "arr[i] " << arr[i] << "\n";
        sum = sum + arr[i];
    }
    cout << sum << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
}