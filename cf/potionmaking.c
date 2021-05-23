#include<stdio.h>
int gcd(int k, int water)
{
    if (k == 0)
        return water;
    return gcd(water%k, k);
}
void calculate()
{
    int k,water,g,steps;
    scanf("%d",&k);
    water = 100-k;
    g = gcd(k,water);
    k = k/g;
    water = water/g;
    steps = k+water;
    printf("%d\n",steps);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t;i++)
    calculate();
    return 0;
}