//https://www.codechef.com/COOK139D/problems/JASSIGNMENTS
#include<iostream>
using namespace std;
void logic()
{
    int time;
    cin >> time;
    if((time+3) <=10)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
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