#include<iostream>
using namespace std;
int main()
{
    int year,d1,d2,d3,d4;
    cin >> year;
    while(true)
     {
         year++;
         d4=year/1000;
         d3=year/100%10;
         d2=year/10%10;
         d1=year%10;  
         if(d4!=d3 && d4!=d2 && d4!=d1 && d3!=d2 && d3!=d1 && d2!=d1)
         {
             break;
         }
     }
    cout << year;
    return 0;
}