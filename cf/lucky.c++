//
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string ticket;
    cin >> ticket;
    int first_sum =0, second_sum =0;
    for(int i=0; i<3; i++)
    {
        first_sum = first_sum+ (ticket[i]-48);
    }
    //cout << first_sum <<"\n";

    for(int i=ticket.length()-1; i>=ticket.length()-3; i--)
    {
        second_sum = second_sum+ (ticket[i]-48);
    }
    //cout << second_sum <<"\n";

    if(first_sum==second_sum)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
    return 0;
}