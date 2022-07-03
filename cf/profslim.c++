//https://codeforces.com/problemset/problem/1670/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void logic()
{
    int length, negative =0;
    cin >> length;
    vector<int> arr(length);
    for(int i=0; i<length;i++)
    {
        cin >> arr[i];
        if(arr[i]<0)
        {
            negative++;
        }
    }
    for(int i=0; i<length; i++)
    {
        if(i<negative)
        {
            arr[i] = -1 * abs(arr[i]);
        }
        else
        {
            arr[i] = abs(arr[i]);
        }
    }
    if(is_sorted(arr.begin(), arr.end()))
    {
        cout << "YES" <<"\n";
    }
    else
    {
        cout << "NO" <<"\n";
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