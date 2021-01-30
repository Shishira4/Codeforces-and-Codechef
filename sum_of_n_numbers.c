#include<stdio.h>
int input();
int add(int n);
int main()
{
    int n, sum =0;
	n = input();
	sum = add(n);
}
int input()
{
    int n;
	printf("How many elements to add\n");
	scanf("%d", &n);
	if(n<0)
	input();
	return n;
}
int add(int n)
{
	float s = 0.0, value;

	printf("Enter the elements\n");
	for(int i =0; i<n; i++)
	{
		scanf("%f",&value);
		s = s+value;
    }
printf("Sum of the integers is %f\n",s);
}






