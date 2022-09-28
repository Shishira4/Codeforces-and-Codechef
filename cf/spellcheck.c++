//https://codeforces.com/contest/1722/problem/0
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t, len;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> len;
        string s;
        cin >> s;
        if(len!=5)
        {
            cout << "NO" << "\n";
            continue;
        }
        else
        {
            if(s.find("T")!= -1 && s.find("i")!= -1 && s.find("m")!= -1 && s.find("u")!= -1 && s.find("r")!= -1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}