#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int length;
    bool is_triple = true;
    cin >> length;
    vector<int> array(length);
    for(int i=0; i<length; i++)
    {
        cin >> array[i];
    }
    map<int, int> frequency;
    for (int i = 0; array[i]; i++) 
    {

        if (frequency.find(array[i]) == frequency.end()) {
            frequency[array[i]] = 1;
        }
        else 
        {
            frequency[array[i]]++;
        }
    }

    for (auto& it : frequency) 
    {
        if(it.second>=3)
        {
            cout << it.second << "\n";
            break;
        }
        else
        {
            is_triple=false;
        }
    }
    if(is_triple==false)
    {
        cout << "-1" << "\n";
    }
}
int main()
{
    int test_cases, time;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}
https://onlinegdb.com/0qtu1209a