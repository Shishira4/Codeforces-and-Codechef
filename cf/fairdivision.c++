//https://codeforces.com/problemset/problem/1472/B
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int candies, total_weight=0, number_of_ones=0, number_of_twos=0,remaining_ones, remaining_twos, weight_left;
    cin >> candies;
    vector<int> weight(candies);
    int alice, bob;
    for(int i=0; i<candies; i++)
    {
        cin >> weight[i];
        if(weight[i]==1)
        {
            number_of_ones++;
        }
        else
        {
            number_of_twos++;
        }
        total_weight = total_weight+weight[i];
    }
    if(total_weight%2!=0)
    {
        cout << "NO" << "\n";
    }
    else if(number_of_twos%2!=0&& number_of_ones<2)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        logic();
    }
    return 0;
}