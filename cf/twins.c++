//https://codeforces.com/problemset/problem/160/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int test_cases, sum=0, total_money=0, temp_sum=0, count=0;
    cin >> test_cases;
    vector<int> coins(test_cases);
    for(int i=0; i<test_cases; i++)
    {
        cin >> coins[i];
        sum = sum+coins[i];
    }
    sort(coins.begin(), coins.end());
    /*for(int i=0; i<test_cases; i++)
    {
        cout << "coins" << coins[i]<< "\t";
    }*/
    for(int i = test_cases-1;i>=0 && temp_sum<=sum; i--)
    {
        temp_sum= temp_sum+coins[i];
        sum = sum-coins[i]; 
        //cout << temp_sum << "\t" << sum << "\n";
        count++;
    }
    cout << count;
    return 0;
}