//https://codeforces.com/contest/1673/problem/A
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string str; 
    int alice=0, bob=0, len;
    cin >> str;
    len = str.length();
    for(int i=0; i<len;i++)
    {
        alice = alice+ ((str[i]- 'a')+1);
        //cout << "score " << alice << "\n";
    }
    if(len==1)
    {
        cout << "Bob " << alice << "\n";
    }
    else
    {
        if(len%2==0)
        {
            cout << "Alice " << alice << "\n";
        }
        else
        {
            if(str[0]<=str[len-1])
            {
                bob = bob+ ((str[0]-'a')+1);
            }
            else
            {
                bob = bob+ ((str[len-1]-'a')+1);
            }
            alice = alice-bob;
            cout << "Alice " << alice-bob << "\n";
        }
    }
    
}
int main()
{
    int rounds;
    cin>> rounds;
    while(rounds--)
    {
        logic();
    }
    return 0;
}