#include<iostream>
using namespace std;
int main()
{
    int x, least_steps;
    cin >> x;
    if(x%5 == 0)
    {
        least_steps = x/5;
    }
    else if(x%5 !=0)
    {
        least_steps = x/5 + 1;
    }
    else if(x<=5)
    {
        least_steps=1;
    }
    cout << least_steps;
    return 0;
}