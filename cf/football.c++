//https://codeforces.com/problemset/problem/96/A
#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    string players, dangerous_combination_one = "0000000", dangerous_combination_two = "1111111" ;
    cin >> players;
    if(players.find(dangerous_combination_one)!= string::npos || players.find(dangerous_combination_two)!= string::npos)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}