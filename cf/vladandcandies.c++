//https://codeforces.com/contest/1660/problem/B
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void logic()
{
    int n;
    cin >> n;
    vector<int> candies(n);
    for(int i=0; i<n;i++)
    {
        cin >> candies[i];
    }
    if(n==1)
    {
        if(candies[0]>1)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }
    else
    {
        sort(candies.begin(), candies.end());
        if(candies[n-1] - candies[n-2] == 0 || candies[n-1] - candies[n-2] == 1)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
}
int main()
{
    int test_cases;
    cin>> test_cases;
    while (test_cases--)
    {
        logic();
    }
    
    return 0;
}