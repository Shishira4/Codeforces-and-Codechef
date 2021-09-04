//https://codeforces.com/contest/1560/problem/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,k;
    cin >> t;
    vector<int> n(t+1);
    for(int i=0;i<t;i++)
    {
        cin >> n[i];
        k = n[i];
        while(k%3==0 || k%10 ==3)
        {
            k++; 
        }   
        cout << k;                  
    } 
    return 0;
}