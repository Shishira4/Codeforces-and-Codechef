//https://codeforces.com/problemset/problem/141/A
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string guest_name, host_name, pile;
    cin >> guest_name >> host_name >> pile;
    guest_name = guest_name+host_name;
    sort(guest_name.begin(), guest_name.end());
    sort(pile.begin(), pile.end());
    //cout << "Guest name : " << guest_name << "\n pile " << pile << "\n";
    if(guest_name==pile)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}