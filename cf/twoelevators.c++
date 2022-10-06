//https://codeforces.com/contest/1729/problem/A
#include<iostream>
#include<cmath>
using namespace std;
void logic()
{
    int a, b, c;
    cin >> a >> b >> c;
    int first = abs(a-1);
    int second = abs(b-c)+abs(c-1);
    if(first == second)
    {
        cout << 3 << "\n";
    }
    else if(first<second)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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