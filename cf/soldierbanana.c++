#include<iostream>
using namespace std;
int logic(int w, int k, int n)
{
    int ans=0, borrowed_money;
    for(int i=1; i<=w;i++)
    {
        ans = ans+(i*k);        
    }
    borrowed_money = ans - n;
    if(borrowed_money < 0)
    {
        return 0;
    }
    return borrowed_money;
}
int main()
{
    int k,n,w, answer, borrowed_money;
    cin >> k >> n >> w;
    answer = logic(w,k,n);    
    cout << answer;
    return 0;
}