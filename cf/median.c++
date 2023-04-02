//https://codeforces.com/contest/1760/problem/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void logic()
{
    vector<int> a(3);
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[1] << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        logic();
    }
    return 0;
}

