//https://www.codechef.com/problems/MINCOINS
//https://www.codechef.com/viewsolution/60962765
#include<iostream>
using namespace std;
void logic()
{
    int money;
    cin >> money;
    if(money%5!=0)
    {
        cout << "-1" << "\n";
    }
    else if(money%10==0 && money%5==0)
    {
        cout << money/10 << "\n";
    }
    else if(money%10!=0 && money%5==0)
    {
        cout << (money/10) + 1 << "\n";
    }
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