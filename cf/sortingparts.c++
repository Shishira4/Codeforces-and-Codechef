//https://codeforces.com/contest/1637/problem/0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void logic()
{
    int length;
    cin >> length;
    bool can_be_sorted;
    vector<int> array(length);
    vector<int> sort_array;
    for(int i=0; i<length; i++)
    {
        cin >> array[i];
    }
    sort_array = array;
    sort(sort_array.begin(), sort_array.end());
    for(int j=0; j<length;j++)
    {
        cout << "\nsorted_array :" << sort_array[j] << "\t";
    }
    for(int i=0; i<length;)
    {
        partial_sort(array.begin(), array.begin(), array.begin()+i);
        for(int j=0; j<length;j++)
        {
            cout << "\nbetween 0 to i "<< i << " " << array[j] << "\t";
        }
        partial_sort(array.begin()+ i, array.end(), array.end());
        for(int j=0; j<length;j++)
        {
            cout  <<"\nbetween 1 to n-1 " << array[j] << " " << j  << "\t";
        }
        if(array==sort_array)
        {
            cout << "\nNO";
            can_be_sorted = true;
            break;
        }
        else
        {
            i++;
            can_be_sorted = false;
        }
    }
    if(can_be_sorted==false)
    {
        cout << "\nYES";
    }
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