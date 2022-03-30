//https://codeforces.com/contest/1658/problem/B
#include<iostream>
#include<vector>
using namespace std;
const int MOD = 998244353, NMAX = 1000;
vector<long long> fact(NMAX);
void calculate_factorial()
{
    fact[0]=1;
    for(int i=1; i<NMAX;i++)
    {
        fact[i]= (fact[i-1]*i)% MOD;
    }
}
void logic()
{
    int size;
    long long answer;
    cin >> size;
    if(size%2==0)
    {
        answer = (fact[size/2] * fact[size/2])%MOD;
    }
    else
    {
        answer = 0;
    }
    cout << answer << "\n";
}
int main()
{
    calculate_factorial();
    int test_cases;
    cin>> test_cases;
    while (test_cases--)
    {
        logic();
    }
    
    return 0;
}
