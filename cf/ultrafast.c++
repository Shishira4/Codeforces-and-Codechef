//https://codeforces.com/contest/486/problem/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n, n1,ans="";
    int length_n;
    cin >> n >> n1;
    length_n = n.length();
    //cout << "length : " << length_n << "\n";
    for(int i=0; i<length_n;i++)
    {
        if(n[i]==n1[i])
        {
            ans = ans+'0';
            //cout << ans << "\n";
        }
        else
        {
            ans = ans+'1';
            //cout << ans << "\n";
        }
    }
    cout << ans;
    return 0;
}