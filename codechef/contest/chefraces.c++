//https://www.codechef.com/LTIME106D/problems/CREDCOINS
//https://www.codechef.com/viewsolution/60772897
#include<iostream>
using namespace std;
int logic()
{
    int rival_1, rival_2, a,b, medals=2;
    cin >> rival_1 >> rival_2 >> a >> b;
    if(rival_1==a || rival_1 == b || rival_2 == a || rival_2 == b)
    {
        medals--;
    }
    cout << medals;
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