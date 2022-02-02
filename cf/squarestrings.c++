//https://codeforces.com/contest/1619/problem/A
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void logic(string line)
{
    string new_line = "";
    for(int i=0; i<line.length(); i++)
    {
        for(int j=0; j<line.length(); j++)
        {
            new_line = line.substr[i,j];
        }
        
    }
}
int main()
{
    int test_cases;
    string line;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        cin >> line;
        logic(line);
    }
}