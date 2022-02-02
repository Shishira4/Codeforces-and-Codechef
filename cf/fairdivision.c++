//https://codeforces.com/problemset/problem/1472/B
#include<iostream>
#include <numeric>
#include<algorithm>
using namespace std;
void logic(int candies)
{
    vector<int> weight(candies);
    //vector<int> total_weight_at(candies,0);
    for(int i=0; i<candies;i++)
    {
        cin >> weight[i];
    }
    int total_weight= accumulate(weight.begin(), weight.end(),0);
    if(total_weight%2!=0)
    {
        cout << "NO";
    }
    else
    {
        sort(weight.begin(), weight.end());
        int sum=0, remaining_sum=0, count =0;
        while(sum!= total_weight/2)
        {
            sum = sum+weight[count];
            count++;
        }
        for(int i=count+1; count<candies;i++)
        {
            remaining_sum = remaining_sum+weight[count];
        }
        if(remaining_sum==total_weight/2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    // total_weight_at[0]=weight[0];
    // for(int i=1; i<candies; i++)
    // {
    //     total_weight_at[i]=weight[i-1]+weight[i];
    // }
    // if(candies==1|| candies%2!=0)
    // {
    //     cout << "NO";
    // }
    // int middle = candies/2;
    // else if(weight[candies-1]==( weight[candies-1]-candies[middle]) )
    // {
    //     cout << "YES";
    // }
}
int main()
{
    int test_cases, candies;
    cin >> test_cases;
    for(int i=1; i<=test_cases; i++)
    {
        cin >> candies;
        logic(candies);
    }
    return 0;
}