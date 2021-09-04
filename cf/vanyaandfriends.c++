//https://codeforces.com/problemset/problem/677/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,height_fence, width=0;
    cin >> n >> height_fence;
    vector<int> height_friend(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> height_friend[i];
        if(height_friend[i]>height_fence)
        {
            width = width+2;
        }
        else
        {
            width=width+1;
        }
    }
    cout << width;

    return 0;
}