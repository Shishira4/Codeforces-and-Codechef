#include<cstdio>
#include<iostream>
#include<string>
#include<minmax.h>
using namespace std;
char s[50];
void rooms()
{
    int n, visited_rooms, length;
    
    scanf("%d",&n);
    scanf("%s",s);
    visited_rooms =n;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            visited_rooms = max(visited_rooms, 2*max(i+1, n-i));
        }        
    }
    printf("%d\n",visited_rooms);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        rooms();
    }
    return 0;
}