//https://codeforces.com/problemset/problem/732/A
#include<iostream>
using namespace std;
int main()
{
    int price, change, remaining_money,  shovels_to_buy=0 ;
    cin >> price >> change;
    for(int i=1; i<=10;i++)
    {
        remaining_money = (price*i)%10;
        if((remaining_money==0) || (remaining_money==change))
        {
            cout <<i;
            break;
        }
    }
    return 0;
}