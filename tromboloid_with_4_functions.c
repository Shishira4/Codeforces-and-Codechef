//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
// adding 2 numbers with 4 functions
int input();
int input_1();
int volume();
int output();
int main()
{
    int h,d,b,vol;
    h = input();
    d= input();
    b = input_1();
    vol = volume(h,d,b);
    output(vol);
    printf("The volume is %d", vol);
}
int input() // to read the first number
{
    int a;
    printf("Enter\n");
    scanf("%d",&a);
    return a;
}
int input_1()
{
    int b;
    printf("Enter\n");
    scanf("%d",&b);
    return b;
    
}
int volume(int a, int b, int c) // add 2 numbers
{
    int volume;
    volume = (1.0/3.0)*((a*b)+b)/c;
    return volume;
}
int output(int v)// output 
{
    printf("The volume is %d",v);
}
