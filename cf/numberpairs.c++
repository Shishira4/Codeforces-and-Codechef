#include <iostream>
using namespace std;
void solve()
{
    int n,l,r;
    int count =0;
    const int len =55;
    int arr[len];
    cin >>n;
    cin >>l;
    cin >>r;
    for(int i=0; i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]+arr[j]>=l && arr[i]+arr[j]<=r)
                {
                    count++;
                }
            }
        }
    }
    cout<< count;
    cout<< "\n";
    
}
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        solve();
    }
    return 0;
}