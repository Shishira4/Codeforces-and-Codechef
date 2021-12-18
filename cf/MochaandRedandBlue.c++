//https://codeforces.com/problemset/problem/1559/B
#include<iostream>
#include<string>
using namespace std;
void logic(int squares, string color)
{
    for( int i=0; i<squares; i++)
    {
        if(color[i]=='?')
        {
            if(color[i+1]== 'R'|| color[i-1]== 'R')
            {
                color[i] = 'B';
            }
            else if(color[i+1]== 'B' || color[i-1]== 'B')
            {
                color[i] = 'R';
            }
            else
            {
                color[i] = 'B';
            }
        }
    }
    cout << color << "\n";
}
int main()
{
    int test_cases, squares;
    string color;
    cin >> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        cin >> squares >> color;
        logic(squares, color);
    }

    return 0;
}