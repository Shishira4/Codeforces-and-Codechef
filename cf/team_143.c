#include<stdio.h>
int main()
{
    int t;
    int a[3];
    int count=0;
    int sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum=0;
        
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
            sum = sum+a[j];
        }
        if(sum>=2)
        {
            count ++;
        }                        
        
    }
    printf("%d",count);
    
    return 0;
}