//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
// adding 2 numbers with 4 functions
int input_1();
int input_2();
int add();
int main()
{
    int x,y,sum;
    x = input_1();
    y= input_2();
    sum = add(x,y);
    printf("The sum is %d", sum);
}
int input_1() // to read the first number
{
    int a;
    printf("Enter the first number\n");
    scanf("%d",&a);
    return a;
}
int input_2() // to read the second number
{
    int b;
    printf("Enter the second number\n");
    scanf("%d",&b);
    return b;
}
int add(int a, int b) // add 2 numbers
{
    int sum =0;
    sum = a+b;
    return sum;
}
