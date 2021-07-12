//Boy or Girl - div 2 #146
#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cin >> line;
    auto res = unique(line.begin(), line.end());
    line = string(line.begin(), res);
    if(line.size() %2 ==0)
    {
        cout << "CHAT WITH HER";
    }
    else
    {
        cout << "IGNORE HIM";
    }
    return 0;
}
/*
//Boy or Girl - div 2 #146
#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cin >> line;
    auto res = unique(line.begin(), line.end());
    line = string(line.begin(), res);
    cout << line << "\n";
    if(line.size() %2 ==0)
    {
        cout << "CHAT WITH HER" << "\n";
    }
    else
    {
        cout << "IGNORE HIM";
    }
    return 0;
}*/