//https://codeforces.com/problemset/problem/469/A
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int levels, level_x, level_y ;
    cin >> levels;
    cin >> level_x;
    vector<int> x(level_x+1);
    for(int i=0;i<level_x;i++)
    {
        cin >> x[i];
    }
    cin >> level_y;
    vector<int> y(level_y+1);
    for(int i=0;i<level_x;i++)
    {
        cin >> y[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i!=x[i])
        {
            if(i!=y[i])
            {
                break;
            }
        }
        else
        {
            cout << "Oh, my keyboard!";
        }
    }
    cout << "I become the guy.";
    return 0;
}