#include<stdio.h>
int compute_sum();
struct fract
    {
        int n;
        int d;
     
    };
    typedef struct fract Fract;
Fract input()
{
    Fract x;
    printf("Enter the numerator and denominator");
    scanf("%d%d",&x.n,&x.d);
    return x;
 
}
int main()
{
    Fract f1,f2;
    f1 = input();
    f2 = input();
    int d = compute_sum(f1,f2);

}
int gcd(int n, int d, Fract f1, Fract f2)
{
    
    int temp;
  
    while(n!=0)
    {
        temp = n;
        n = d%n;
        d = temp;
    }
return d;
}
int compute_sum(Fract f1,Fract f2)
{
    
    int num,den, ans_n, ans_d;
    num = ((f1.n* f2.d) + (f2.n * f1.d));
    den = (f1.d * f2.d);
    int g = gcd(num,den,f1,f2);
    ans_n = num/g;
    ans_d = den/g;
   printf("The sum of the fractions %d/%d and %d/%d is %d/%d",f1.n,f1.d,f2.n,f2.d,ans_n,ans_d);
}

