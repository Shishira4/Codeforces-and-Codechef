//https://codeforces.com/problemset/problem/136/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    cin >> n;
    vector<int> p(n+1), final(n+1); 
    for(int i=0,index=1;i<n;i++,index++)
    {
        cin >> p[i];
        a = p[i];
        final[a] = index;
    }
    for(int i=1;i<=n;i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}