//https://codeforces.com/contest/1679/problem/A
#include<iostream>
using namespace std;
void logic()
{
    long long wheels;
    cin >> wheels;
    if(wheels%2!=0)
    {
        cout << -1 << "\n";
    }
    else
    {
        if(wheels==4 || wheels ==6)
        {
            cout << 1 << " " << 1 << "\n";
        }
        else
        {
            if(wheels/6)
            long long minimum_tires = wheels/6;
            cout << minimum_tires <<" ";
            long long maximum_tires = wheels/4;
            cout << maximum_tires <<"\n";
        }
    }
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
    return 0;
}