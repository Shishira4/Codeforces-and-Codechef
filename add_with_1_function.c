//Write a program to add two user input numbers using one function.
#include<stdio.h>
void main()
{
int x,y, sum=0;
printf("Enter number 1: ");
scanf("%d",&x);
printf("Enter number 2: ");
scanf("%d",&y);
sum = x+y;
printf("Sum of %d and %d is %d",x,y,sum);
}
