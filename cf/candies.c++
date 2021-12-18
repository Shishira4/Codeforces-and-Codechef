//https://codeforces.com/problemset/problem/1343/A
#include<iostream>
using namespace std;

void logic(int candy)
{
    int power =1, k=2;
    while(k<=30)
    {
        power = (1<<k) -1;
        if(candy%power ==0)
        {
            cout << candy/power << "\n";
            break;
        }
        k++;
        
    }

}
int main()
{
    int testcases, candy;
    cin >> testcases;
    for(int i=0; i<testcases;i++)
    {
        cin >> candy;
        logic(candy);
    }
    return 0;
}
