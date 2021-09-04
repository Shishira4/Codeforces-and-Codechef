//https://codeforces.com/problemset/problem/791/A
#include<iostream>
using namespace std;
void logic(int a, int b)
{
    int count = 0;
    while(a<=b)
    {
        
        a=a*3;
        b=b*2;
        count++;
    }
    cout << count;
}
int main()
{
    int weight_a, weight_b;
    cin >> weight_a >> weight_b;
    logic(weight_a, weight_b);
    return 0;
}