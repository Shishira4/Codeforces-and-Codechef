//https://codeforces.com/problemset/problem/580/C
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int nodes = 1e5+1;
vector<vector<int>> edges(nodes);
//vector<bool> visited(nodes)={false};
vector<int> cats(nodes);
int ans=0;
int maximum_cats_ok;
void dfs(int current, int parent, int maximum_cats, int current_cats)
{
    int child=0;
    if(cats[current])
    {
        current_cats++;
    }
    else
    {
        current_cats=0;
    }
    maximum_cats = max(maximum_cats, current_cats);
    for(int i: edges[current])
    {
        if(i!=parent)
        {
            dfs(i, current, maximum_cats, current_cats);
            child++;
        }
    }
    if((child==0)&& maximum_cats<=maximum_cats_ok)
    {
        ans++;
    }
}
int main()
{
    int vertices;
    cin >> vertices >> maximum_cats_ok;
    for(int i=1; i<=vertices; i++)
    {
        cin >> cats[i];
    }
    for(int i=1; i<vertices; i++)
    {
        int x,y;
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    dfs(1,-1, 0, 0);
    cout << ans << "\n";
}