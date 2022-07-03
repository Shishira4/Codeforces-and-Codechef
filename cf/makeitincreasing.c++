//https://codeforces.com/contest/1675/problem/B
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int n, count=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=n-2; i>=0;i--)
    {
        while(arr[i]>=arr[i+1]&&arr[i]>0)
        {
            arr[i]=arr[i]/2;
            count++;
        }
        if(arr[i]==arr[i+1])
        {
            cout << "-1" << "\n";
            return;
        }
    }
    
    cout << count << "\n";
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
