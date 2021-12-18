//https://codeforces.com/problemset/problem/1555/A
#include<iostream>
using namespace std;
void logic(long long friends)
{
    if(friends<6)
    {
        cout << 15;
    }
    else
    {
        cout << (friends * 5/2) << "\n";
    }

}
int main()
{
    int test_cases;
    long long friends;
    cin >> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        cin>> friends;
        if(friends %2 !=0)
        {
            friends = friends+1;
        }
        logic(friends);
    }
    return 0;
}