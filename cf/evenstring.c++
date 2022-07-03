//https://codeforces.com/contest/1660/problem/A
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string line;
    int remove=0;
    cin >> line;
    bool repeat = true;
    for(int i=0; i<line.length();)
    {
        if(line[i]!=line[i+1])
        {
            i++;
        }
        repeat = true;
    }
    if(repeat==true)
    {
        remove = line.length();
    }
    cout << "remove";
}
int main()
{
    int test_cases;
    cin>> test_cases;
    while (test_cases--)
    {
        logic();
    }
    
    return 0;
}