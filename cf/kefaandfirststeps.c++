//https://codeforces.com/problemset/problem/580/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int days, count=0;
    cin >> days;
    vector<int>money(days+1);
    for(int i=0; i<days; i++)
    {
        cin >> money[i];
    }
    for(int i=0; i<days; i++)
    {
        for(int j=i+1; j<days; j++)
        {
            if(money[i]<money[j])
            {
                continue;
            }
            else if(money[i]>=money[j])
            {
                count++;
                i=j;
                continue;
            }
        }
    }
    cout << count;
}