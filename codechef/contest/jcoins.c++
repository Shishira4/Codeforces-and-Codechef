//https://www.codechef.com/COOK139D/problems/JCOINS
//solution link -https://www.codechef.com/viewsolution/59728910
#include<iostream>
using namespace std;
void logic()
{
    int x,y, total_money=0;
    cin >> x >> y;
    total_money = (x*10)+(y*5);
    cout << total_money << "\n";
}
int main()
{
    int test_cases, time;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}