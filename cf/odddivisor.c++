//https://codeforces.com/problemset/problem/1475/A
#include<iostream>
using namespace std;
void logic()
{
    long long number;
    cin >> number;
    bool has_odd_divisor=false;
    if(number<3)
    {
        cout << "NO" << "\n";
    }
    for(long long i=3; i<=number;i=i+2)
    {
        //cout << "hi "<<number%i <<"\n";
        if((number%i)==0)
        {
            has_odd_divisor = true;
            break;
        }
    }
    if(has_odd_divisor==false)
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
    cin>> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        logic();
    }
    return 0;
}