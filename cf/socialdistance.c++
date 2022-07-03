//https://codeforces.com/contest/1668/problem/B
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    long long people, chairs, count=0;
    cin >> people >> chairs;
    vector<int> empty(people);
    for(int i=0; i<people; i++)
    {
        cin >> empty[i];
        count = count+ empty[i]*2;
    }
    //cout << count << " " << chairs;
    if(count <=chairs)
    {
        cout << "YES" <<'\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
    return 0;
}