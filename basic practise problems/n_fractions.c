#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct fract
{
  int n;
  int d;
};
typedef struct fract Fract;



int input_no()
{
    int n;
    printf ("Enter the no. of terms: \n");
    scanf ("%d", &n);
    return n;
}
void input (Fract *x)
{
    printf ("Enter the numerator: \n");
    scanf ("%d", &x->n);
    printf ("Enter the denominator: \n");
    scanf ("%d", &x->d);
}
Fract input_n(int n, Fract *arr)
{
    for (int i = 0; i < n; i++)
   {
      printf ("Enter fraction \n");

      input(&arr[i]);
  }
    
}



int gcd (int n, int d)
{
  int temp;

  while (n != 0)
    {
      temp = n;
      n = d % n;
      d = temp;
    }
  return d;
}

Fract compute_sum (Fract y,Fract x)
{
    Fract sum;
    int c;
    
    sum.n = ((y.n * x.d) + (x.n * y.d));
    sum.d = y.d * x.d;
    c = gcd (sum.n, sum.d);
    
    sum.n = sum.n / c;
    sum.d = sum.d / c;
    printf("%d",c);
    return sum;
}

Fract compute_n_sum(int n, Fract arr[n])
{
    Fract y;
    y.n=arr[0].n;
    y.d = arr[0].d;
    for(int i=0;i<n-1;i++)
    {
       y = compute_sum(y,arr[i+1]);
    }
    printf("after %d %d\n",y.n, y.d);
    return y;
}

void result_n(Fract x, int n, Fract arr[n])
{
    printf(" Sum of %d/%d",arr[0].n,arr[0].d);
    for(int i=1;i<n;i++)
    {
        printf("+%d/%d ",arr[i].n,arr[i].d);
        
}
    printf("=%d/%d\n", x.n, x.d);
}

int main ()
{
    int n;
    Fract x;
    n = input_no();
    Fract arr[n];
    input_n(n,&arr[0]);
    x = compute_n_sum(n,arr);
    result_n(x,n,arr);
    
    return 0;
}



