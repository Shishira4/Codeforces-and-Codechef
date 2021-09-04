#include<iostream>
using namespace std;
void logic(int n, int k)
{
    int i=0;
    while(i<k)
    {
        if(n%10 == 0)
        {
            n = n/10;
        }
        else
        {
            n = n--;
        }
        i++;
    }
    cout <<n;
}

int main()
{
    int n,k;
    cin >> n >> k;
    logic(n,k);
    return 0;
}