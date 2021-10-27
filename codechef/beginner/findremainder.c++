//https://www.codechef.com/problems/FLOW002
#include<iostream>
using namespace std;
int main()
{
    int test_cases, a,b, remainder;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        cin >> a >> b;
        remainder = a%b;
        cout << remainder;
    }
    return 0;
}