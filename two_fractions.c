#include<stdio.h>
struct fract
    {
        int n;
        int d;
     
    };
    typedef struct fract Fract;
Fract compute_sum();
void output(Fract f1, Fract f2, Fract s);
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
    Fract d = compute_sum(f1,f2);
    output(f1,f2,d);

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
Fract compute_sum(Fract f1,Fract f2)
{
    Fract s;
    int num,den;
    num = ((f1.n* f2.d) + (f2.n * f1.d));
    den = (f1.d * f2.d);
    int g = gcd(num,den,f1,f2);
    s.n = num/g;
    s.d = den/g;
    return s;
}
void output(Fract f1, Fract f2, Fract s)
{
    printf("The sum of %d/%d and %d/%d is %d/%d", f1.n,f1.d,f2.n,f2.d,s.n,s.d);
}
