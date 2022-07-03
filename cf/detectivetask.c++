//https://codeforces.com/contest/1675/problem/C
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string answers;
    cin >> answers;
    
    if(answers.length()==1)
    {
        cout << "1" << '\n';
        return;
    }
    else
    {
        int zero= answers.find_first_of('0'); 
        one= answers.find_last_of('1');
        if(zero<1)
        {
            cout << one-zero+1 << "\n";
        }
        else
        {
            cout << zero-one+1 << "\n";
        }
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