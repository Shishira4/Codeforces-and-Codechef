//https://www.codechef.com/LTIME106D/problems/CREDCOINS
//https://www.codechef.com/viewsolution/60772897
#include<iostream>
using namespace std;
void logic()
{
    int coins, bills, bags;
    cin >> coins >> bills;
    bags = (coins*bills)/100;
    cout << bags << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}