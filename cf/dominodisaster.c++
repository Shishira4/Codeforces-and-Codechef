//https://codeforces.com/problemset/problem/1567/A
#include<iostream>
#include<string>
using namespace std;
void logic(int columns, string row)
{
    string  final_row="";
    for(int i=0; i<columns; i++)
    {
        if(row[i]=='U')
        {
            final_row = final_row+"D";
        }
        else if(row[i]=='D')
        {
            final_row = final_row+ "U";
        }
        else
        {
            final_row = final_row+row[i];
        }
    }
    cout << final_row << "\n";
}
int main()
{
    int test_cases, columns;
    string row;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++)
    {
        cin >> columns;
        cin >> row;
        logic(columns, row);
    }
    
    return 0;
}