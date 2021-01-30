//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
     {
        int n;
        int d;
     
      }Fract;
 
   Fract sum(Fract,Fract);
 
   int main()
    {
     int num1,deno1,num2,deno2;
     printf("Enter first fraction's numerator and denominator:");
     scanf("%d%d",&num1,&deno1);
     printf("Enter second fraction's numerator and denominator:");
     scanf("%d%d",&num2,&deno2);
    
     Fract f1={num1, deno1}; // fraction 1
     Fract f2 ={num2, deno2};//fraction 2
     Fract result = sum(f1, f2);//sum the fractions
     printf("Result=%d/%d",result.n,result.d);  //display the result
     return 0;
    }
   Fract sum(Fract f1, Fract f2)
    {
     Fract result={(f1.n* f2.d) + (f2.n * f1.d), f1.d * f2.d};
     return result;
    }
