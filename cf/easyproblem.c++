//https://codeforces.com/problemset/problem/1030/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, count=0;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<< "HARD";
    }
    else
    {
       cout << "EASY"; 
    }
     
    return 0;
}