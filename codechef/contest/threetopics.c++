//https://www.codechef.com/LTIME106D/problems/CREDCOINS
//https://www.codechef.com/viewsolution/60772897
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cin>> a >> b >> c >> x;
    if(x==a || x==b || x==c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}