//https://codeforces.com/problemset/problem/228/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int count=0;
    vector<long long int> arr(5);
    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
        for(int j=0;j<4;j++)
        {
            if(arr[j]==arr[j+1])
            {
                //cout << arr[j] << "\n";
                count++;
            }
        }
    cout << count;
    return 0;
}