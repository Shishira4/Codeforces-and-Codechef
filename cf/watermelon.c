#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t>2 && t%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}