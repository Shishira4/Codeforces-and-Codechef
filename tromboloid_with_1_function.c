//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
  float d,h,b,volume;
  printf("Enter d: \n");
  scanf("%f",&d);
  printf("Enter h: \n");
  scanf("%f",&h);
  printf("Enter b: \n");
  scanf("%f",&b);
  volume = ((1.0/3.0)*((h*d)+d))/d;
  printf("Volume is %f",volume);
}
