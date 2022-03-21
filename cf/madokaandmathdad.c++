//https://codeforces.com/contest/1647/problem/A
#include<iostream>
using namespace std;
void logic()
{
    int n, answer,max=0;
    cin >> n;
    for(int i=1; i<n;i++)//number 1 2 3 4// max of entire
    {
        int sum=0;
        for(int j=1;j<n;)// 1 2 3 4 // find max of combination
        {
            sum = sum+j;//1,3
            if(sum>n)//1,
            {
                j++;
            }
        }
    }
}
int main()
{
    //first all numbers <n
    //add each of them, find the max from combinations
    //5
    //1 2 3 4 
    //124
    //14
    //212
    //23
    //131
    //32
    //41
    /*if (i+sum >=5)
    {
        i++;
    }
    return 0;
}