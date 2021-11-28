//https://codeforces.com/problemset/problem/405/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int number_of_columns;
    cin >> number_of_columns;
    vector<int>blocks(number_of_columns);
    for(int i=0; i<number_of_columns; i++)
    {
        cin >> blocks[i];
    }
    sort(blocks.begin(), blocks.end());
    for(int i=0; i<number_of_columns; i++)
    {
        cout << blocks[i] <<" ";
    }
    return 0;
}