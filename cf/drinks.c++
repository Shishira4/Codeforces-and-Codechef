//https://codeforces.com/problemset/problem/200/B
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double avg, sum=0.0;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum/n;
    cout << fixed << setprecision(12) << avg;
    return 0;
}