//WAP to find the sum of two fractions.
#include<stdio.h>
int compute_sum();
typedef struct
    {
        int n;
        int d;
     
    }Fract;
void input()
{
    int n1,d1,n2,d2;
    Fract f1, f2;
    printf("Enter the first numerator and denominator");
    scanf("%d%d",&f1.n,&f1.d);
    printf("Enter the second numerator and denominator");
    scanf("%d%d",&f2.n,&f2.d);
    compute_sum(f1,f2);
}
int main()
{
    input();
}
int gcd(int n, int d, Fract f1, Fract f2)
{
    
    int temp, ans_n, ans_d;
    ans_n = n;
    ans_d = d;
    while(n!=0)
    {
        temp = n;
        n = d%n;
        d = temp;
    }
    ans_n = ans_n/d;
    ans_d = ans_n/d;
    printf("The sum of the fractions %d/%d and %d/%d is %d/%d",f1.n,f1.d,f2.n,f2.d,ans_n,ans_d);
}
int compute_sum(Fract f1,Fract f2)
{
    
    int num,den;
    num = ((f1.n* f2.d) + (f2.n * f1.d));
    den = (f1.d * f2.d);
    int g = gcd(num,den,f1,f2);
    
}
