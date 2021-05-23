#include<cstdio>
using namespace std;
int a[51];
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++)
    {
        int n;
        scanf("%d",&n);
        
        int step = 0;
        for(int j=1; j<=n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]!=j)
            {
                step++;
            }
        }
            if(step==0)
            {
                printf("%d\n",0);
            }
            else if(a[1]==1 || a[n] ==n)
            {
                printf("%d\n",1);
            }
            else if(a[1]==n && a[n]==1)
            {
                printf("%d\n",3);
            }
            else if(a[1]!=1 && a[n]!=n)
            {
                printf("%d\n",2);
            }
        
    }
    return 0;
}