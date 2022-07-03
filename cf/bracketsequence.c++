//https://codeforces.com/contest/1657/problem/C
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    int length, remaining, operations=0;
    string sequence;
    cin >> length >> sequence;
    remaining = length;
    for(int i=0; i+1<length; i++)
    {
        if(sequence[i]=='(')
        {
            operations++;
            remaining = remaining-2;
            i++;
        }
        else
        {
            int j=i+1;
            for(;j<length;j++)
            {
                if(sequence[j]==')')
                {
                    break;
                }
            }
            if(j==length)
            {
                break;
            }
            operations++;
            remaining= remaining - (j-i+1);
            i=j;
        }
    }
    cout << operations << " " << remaining << "\n";
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