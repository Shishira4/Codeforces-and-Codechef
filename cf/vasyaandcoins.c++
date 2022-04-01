//https://codeforces.com/contest/1660/problem/A
#include<iostream>
using namespace std;
void logic()
{
    int one, two, min_money=0;
    cin >> one >> two;
    if(one==0)
    {
        min_money = 1;
    }
    else
    {
        min_money = (one*1)+(two*2)+1;
    }
    cout << min_money << "\n";
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