#include<stdio.h>
void answer()
    {
        long long r,c;
        long long c_number, r_number, ans;
        long long x;
        scanf("%I64d %I64d %I64d",&r,&c,&x);
        x = x-1;
        c_number = x/r;
        r_number = x%r;
        ans = r_number*c+ c_number+1;
        printf("%I64d \n", ans);
    }
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        answer();
    }
        return 0;
}
    
