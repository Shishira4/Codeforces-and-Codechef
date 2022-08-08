//
#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int MAX= 26;
vector<int> graph[MAX];
vector<int> visited(MAX, false);
vector<int> vertices[MAX];
void mark(int i, int component)
{
    visited[i]=true;
    vertices[component].push_back(i);
    //cout << "graph size" << graph[i].size();
    for(int j=0; j<graph[i].size(); j++)
    {
        if(!visited[graph[i][j]])
        {
            mark(graph[i][j], component);
        }
    }
}
int main()
{
    int length;
    string a,b;
    cin >> length >> a >> b;
    for(int i=0; i<length; i++)
    {
        if(a[i]!= b[i])
        {
            graph[a[i]-'a'].push_back(b[i]-'a');
            graph[b[i]-'a'].push_back(a[i]-'a');
        }
    }
    int component =0, edges=0;
    for(int i=0; i<MAX; i++)
    {
        //cout << "graph size" << graph[i].size() << "\n";
        if(graph[i].size()!=0 && !visited[i]==true)
        {
            //cout << "hi";
            mark(i, component);
            edges = edges+ vertices[component].size()-1;
            component++;
        }
    }
    cout << edges << "\n";
    for(int i=0; i<component; i++)
    {
        for(int j=1; j<vertices[i].size(); j++)
        {
            cout << char('a'+ vertices[i][j-1]) << " " << char('a'+ vertices[i][j]) << "\n";
        }
    }
    return 0;
}