//https://codeforces.com/problemset/problem/913/A
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int answer;
    if(n>31)
    {
        answer=m;
    }
    else
    {
        answer = m % (1<<n) ;
    }    
    cout << answer;
    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int n, m;
    int prod =1, answer;
    cin >> n >> m;
    while(n>0)
    {
        prod = prod*2;
        n--;
    }
    if(n>31)
    {
        answer=m;
    }
    else
    {
        answer = m % prod;
    }    
    cout << answer;
    return 0;
}*/