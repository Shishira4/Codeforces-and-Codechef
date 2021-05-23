#include<cstdio>
using namespace std;
int main()
{
int n,bills;
scanf("%d",&n);
bills=n/100+((n%100)/20)+((n%20)/10)+((n%10)/5+(n%5));
 
printf("%d",bills);
return 0;
}