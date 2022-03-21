//https://www.codechef.com/problems/SPLITPAIR
//submission - 
//https://www.codechef.com/LTIME106D/problems/CREDCOINS
//https://www.codechef.com/viewsolution/60772897
#include<iostream>
using namespace std;
void logic()
{
    // if  A and B are both even -> sum is even
    //if  A and B are both odd -> sum is even
    long long number;
    cin >> number;
    int is_even = (number%10)%2;
    //cout << is_even << "\n";
    number = number/10;
    bool can_split = false;
    while(number)
    {
        if((number%10)%2==is_even)
        {
            cout << "YES"<< "\n";
            can_split=true;
            break;
        }
        number = number/10;
    }
    if(can_split==false)
    {
        cout << "NO" << "\n";
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