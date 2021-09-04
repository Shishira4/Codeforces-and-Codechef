//https://codeforces.com/problemset/problem/734/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, count_a =0, count_d=0;
    string line;
    cin >> n >> line;
    for(int i=0;i<n;i++)
    {
        if(line[i]=='A')
        {
            count_a++;
        }
        else if(line[i]=='D')
        {
            count_d++;
        }
    }
    if(count_a>count_d)
    {
        cout << "Anton";
    }
    else if(count_a<count_d)
    {
        cout << "Danik";
    }
    else
    {
        cout <<"Friendship";
    }
    return 0;
}