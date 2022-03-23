//question link - https://codeforces.com/contest/1657/problem/A
#include<iostream>
using namespace std;
bool check_perfectsquare(int distance)
{
    bool is_perfectsquare = false;
    for(int i=0; i*i<=distance;i++)
    {
        if(i*i==distance)
        {
            return true;
        }
    }
    return false;
}
void logic()
{
    int x, y, distance, answer;
    cin >> x >> y;
    distance = x*x + y*y;
    bool is_perfectsquare = check_perfectsquare(distance);
    if(x==0 && y==0)
    {
        answer= 0;
    }
    else if(is_perfectsquare==true)
    {
        answer=1;
    }
    else
    {
        answer=2;
    }
    cout << answer << "\n";
    
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