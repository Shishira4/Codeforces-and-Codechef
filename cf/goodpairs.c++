//https://codeforces.com/contest/1656/problem/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void logic()
{
    int largest, smallest,length, small_index=0, large_index=0;
    cin >> length;
    vector<int> arr(length);
    for(int i=0; i<length;i++)
    {
        cin >> arr[i];
    }
    smallest = arr[0];
    largest = arr[0];
    for(int i=0; i<length;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            small_index =i;
        }
        else if(arr[i]>largest)
        {
            largest = arr[i];
            large_index =i;
        }
    }
    //cout << "smallest " << smallest << largest << "\n";
    cout << small_index+1 << " " << large_index+1 << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        logic();
    }
    
    return 0;
}