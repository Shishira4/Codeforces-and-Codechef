//https://codeforces.com/contest/1644/problem/0
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string map;
    bool red=false, blue=false, green=false, can_open=true;
    cin >> map;
    for(int i=0; i<map.length();i++)
    {
        if(map[i]=='r')
        {
            red = true;
        }
        else if(map[i]=='b')
        {
            blue = true;
        }
        else if(map[i]=='g')
        {
            green = true;
        }
        else if(map[i]=='R' && red==false)
        {
            can_open = false;
            break;
        }
        else if(map[i]=='B' && blue==false)
        {
            can_open = false;
            break;
        }
        else if(map[i]=='G' && green==false)
        {
            can_open = false;
            break;
        }
    }
    if(can_open==true)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO"<<"\n";
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