//https://codeforces.com/problemset/problem/1328/A
#include<iostream>
using namespace std;
int main()
{
    int test_cases, number_1, number_2, count =0;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++)
    {
        cin >> number_1 >> number_2;
        while(number_2%number_1==0)
        {
            number_1++;
            count++;
        }
        cout << count;
    }
}