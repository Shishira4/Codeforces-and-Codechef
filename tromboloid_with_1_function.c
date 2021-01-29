//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void vol();
int main()
{
  float d,h,b;
  printf("Enter d: \n");
  scanf("%f",&d);
  printf("Enter h: \n");
  scanf("%f",&h);
  printf("Enter b: \n");
  scanf("%f",&b);
  vol(d,h,b);
}
void vol(int x, int y, int z)
{
  float volume;
  volume = ((1.0/3.0)*((y*x)+x))/x;
  printf("Volume is %f",volume);
}

