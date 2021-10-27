//https://www.codechef.com/problems/INTEST
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n,k,count =0;
    cin >> n >> k;
    vector<long long int> arr(n+1);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%k ==0)
        count++;
    }
    cout << count;
    return 0;
}