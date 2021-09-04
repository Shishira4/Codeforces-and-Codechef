//https://codeforces.com/problemset/problem/110/A
#include<iostream>
using namespace std;
int main()
{
    int n,count =0, d;
    cin >> n;

    while(n>0)
    {
        d = n%10;
        //cout<<d;
        if(d==4 || d==7)
        {
            count++;
        }
        n = n/ 10;
    }
    //cout << "COUNT IS "<<count << "\n";
    while(count!=0)
    {
        d = count%10;
        //cout<<"\n d second loop  "<<d;
        if(d!=4 && d!=7)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        count = count/10;
        
    }
    
    return 0;
}