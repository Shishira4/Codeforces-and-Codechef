//https://www.codechef.com/START33D/problems/NONADJFLIP
#include<iostream>
#include<string>
using namespace std;
int logic()
{
    int len,ans=0;
    string binary;
    cin >> len >> binary;
    for(int i=0; i<len;i++)
    {
        if(binary[i]=='1' && binary[i+1]=='1')
        {
            ans =2;
            break;
        }
        else if(binary[i]=='1')
        {
            ans=1;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    
    return 0;
}