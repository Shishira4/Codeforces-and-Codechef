//https://www.codechef.com/problems/HS08TEST
#include<iostream>
#include <iomanip> 
using namespace std;
int main()
{
    int withdraw;
    float initial_balance, final_balance;
    cin >> withdraw >> initial_balance;
    if(withdraw %5 == 0 && initial_balance>= withdraw+0.50)
    {
        final_balance = (initial_balance - withdraw) - 0.50;
        cout << fixed << setprecision(2) << final_balance;
    }
    else
    {
        cout << fixed << setprecision(2) << initial_balance;
    }

    return 0;
}