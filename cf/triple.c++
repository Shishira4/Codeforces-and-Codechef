#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void logic()
{
    int len;
    bool triple;
    cin >> len;
    vector<int> arr(len);
    for(int i=0;i<len;i++)
    {
        cin >> arr[i];
    }
    if(len<=2)
    {
        cout << "-1" << "\n";
    }
    else
    {
        sort(arr.begin(), arr.end());
        for(int i=0; i<len-2;)
        {
            triple = true;
            if(arr[i+1]==arr[i] && arr[i+2]==arr[i])
            {
                cout << arr[i] << "\n";
                break;
            }
            else
            {
                triple = false;
                i++;
            }
        }
        if(triple==false)
        {
            cout << "-1" << "\n";
        }
    }
    
}
int main()
{
    int test_cases, time;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}