//https://www.codechef.com/START28D/problems/PERMXORITY
//solution - https://www.codechef.com/viewsolution/59867383
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int n;
    cin >> n;
    vector<int> answer(n);
    if(n==2)
    {
        cout << "-1";
    }
    else if(n%2!=0)
    {
        for(int i=1; i<n;i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    else
    {
        if(n==4)
        {
            cout << "2 3 1 4";
        }
        if(n>4)
        {
            cout << "2 3 1 4 ";
            for(int i=5;i<=n;i++)
            {
                cout << "i ";
            }
            cout << "\n";
        }
    }
}
int main()
{
    int test_cases;
    cin >>test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}