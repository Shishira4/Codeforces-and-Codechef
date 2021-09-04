//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=310
#include<iostream>
using namespace std;
int main()
{
    long long int b,p,m;
    cin >> b >> p >> m;
    long long int answer, a=p/2;
    if(p%2==0)
    {
        answer=(b<<a)%n;
    }
    else
    {
        answer=((b<<a)*b) %n;
    }    
    cout << answer;
    return 0;
}
binary exponentiation-

long long exp(int a, int p, int m)
{
    b = p/2;
    if(p%2==0)
    {
        ans=(a<<b)%m;
    }
    else
    {
        ans = ((a<<b)*a)%m;
    }
}
   