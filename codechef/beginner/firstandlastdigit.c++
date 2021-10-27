//https://www.codechef.com/problems/FLOW004
#include<iostream>
using namespace std;
int main()
{
    int number, first_digit, last_digit, test_cases, sum;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        sum =0;
        cin >> number;
        first_digit=number;
        last_digit = number%10;
        while(first_digit>=10)
        {
            first_digit = first_digit/10;
        }
        sum = first_digit+last_digit;
        cout << sum << "\n";
    }
    
    return 0;
}