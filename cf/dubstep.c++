//https://codeforces.com/problemset/problem/208/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string dubstep, original;
    cin >> dubstep;
    for(int i=0; i<dubstep.length(); i++)
    {
        if(dubstep[i]=='W' && dubstep[i+1]=='U' && dubstep[i+2] =='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout << dubstep[i];
        }
    }
    return 0;
}