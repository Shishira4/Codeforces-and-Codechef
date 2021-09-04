//https://codeforces.com/problemset/problem/705/A
#include<iostream>
using namespace std;
int main()
{
    int layer;
    cin>>layer;
    for(int i=1;i<=layer;i++)
    {
        if(i%2)
            cout << "I hate ";
        else
            cout << "I love ";
        if(i==layer)
            cout << "it";
        else
            cout << "that ";
    }
    return 0;
}