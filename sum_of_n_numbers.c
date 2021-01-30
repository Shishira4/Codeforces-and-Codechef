#include<stdio.h>
int main()
{
	int n;
	float sum = 0.0, value;
	printf("How many elements to add\n");
	scanf("%d", &n);
	printf("Enter the elements");
	for(int i =0; i<=n; i++)
	{
		scanf("%f",&value);
		sum = sum+value;
}
printf("Sum of the integers is %f\n",sum);
}
