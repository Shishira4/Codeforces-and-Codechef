//https://www.codechef.com/LTIME106D/problems/SALE2
//
#include<iostream>
using namespace std;
void logic()
{
    int items, cost, bill_amt;
    cin >> items >> cost;
    bill_amt = ((items/3) * cost * 2) + ((items%3)*cost);
    cout << bill_amt << "\n";
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