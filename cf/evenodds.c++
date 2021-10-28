//https://codeforces.com/problemset/problem/318/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k;
    cin >> n >> k;
    vector<long long int> even;
    vector<long long int> odd;//v.insert(v.begin()+1,str); 
    for(int i=1; i<=n;i++)
    {
        if(i%2==0)
        {
            even.insert(even.begin(),i);;
        }
        else
        {
            odd.insert(odd.begin(),i);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    odd.insert(odd.end(), even.begin(), even.end());
    cout << odd[k-1] ;
}