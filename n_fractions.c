//WAP to find the sum of n fractions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct fract{
  int n;
  int d;
};
typedef struct fract Fract;
Fract input();
Fract sum(Fract f1, Fract f2);
int gcd(int p, int q);
int  result(Fract s);


int main(){
  int n;
  printf("Enter the no. of terms: ");
  scanf("%d",&n);
  Fract x,y,a[n];
  for(int i=0;i<n;i++){
    printf("Enter fraction %d\n",i+1);
    a[i] = input();
  }
  if(n==1){
    y =a[0];
  }
  else{
    x = a[0];
    for(int i=0;i<n-1;i++){
      y = sum(x,a[i+1]);
      x = y;
    }
  }
  result(x);
  return 0;
}

Fract input(){
  Fract fraction;
  printf("Enter the numerator");
  scanf("%d",&fraction.n);
  printf("Enter the denominator");
  scanf("%d",&fraction.d);
  return fraction;
}


int gcd(int n, int d)
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

Fract sum(Fract f1, Fract f2)
{
  Fract f3;
  int c;
  f3.n = ((f1.n*f2.d)+(f2.n*f1.d));
  f3.d = f1.d*f2.d;
  c = gcd(f3.n,f3.d);
  f3.n = f3.n/c;
  f3.d = f3.d/c;
  return f3;
}

int result(Fract s)
{
  printf("The sum of the given fractions : %d / %d\n",s.n,s.d);
  return 0;
}

