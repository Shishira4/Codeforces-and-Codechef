//https://codeforces.com/problemset/problem/469/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int levels, level_x, level_y,length ;
    cin >> levels;
    cin >> level_x;
    vector<int> x(level_x);
    for(int i=0;i<level_x;i++)
    {
        cin >> x[i];
    }
    cin >> level_y;
    vector<int> y(level_y);
    for(int i=0;i<level_y;i++)
    {
        cin >> y[i];
    }
    x.insert(x.end(), y.begin(), y.end());
    length = x.size();
    cout << "length is "<< length << "\n\n";
    for(int i=0,n=1;i<level_x+level_y,n<=levels;i++,n++)
    {
        cout << "\nx is " << x[i];
        cout << "\ny is " << y[i];
    }
    return 0;
}