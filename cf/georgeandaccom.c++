//https://codeforces.com/problemset/problem/467/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, rooms=0;
    cin >> n;
    vector<int> p(n+1), q(n+1);
    for(int i=0; i<n;i++)
    {
        cin >> p[i] >> q[i];
        if(q[i]-p[i]>=2)
        {
            rooms++;
        }
    }
    cout << rooms;
    return 0;
}