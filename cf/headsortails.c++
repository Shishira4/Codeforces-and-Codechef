//https://codeforces.com/contest/242/problem/A
#include<iostream>
using namespace std;
void total_number_of_outcomes(int vasya_toss, int petya_toss, int head_vasya, int head_petya)
{
    int count =0;
    for(int i=head_vasya;i<=vasya_toss;i++)
    {
        for(int j=head_petya;j<=petya_toss;j++)
        {
            if(i>j)
            {
                count++;
            }
        }
    }
    cout << count<<"\n";
}
void outcomes(int vasya_toss, int petya_toss, int head_vasya, int head_petya)
{
    for(int i=head_vasya;i<=vasya_toss;i++)
    {
        for(int j=head_petya;j<=petya_toss;j++)
        {
            if(i>j)
            {
                cout << i << " " << j << "\n";
            }
        }
    }
}
int main()
{
    int vasya_toss, petya_toss, head_vasya, head_petya;
    cin >> vasya_toss >> petya_toss >> head_vasya >> head_petya;
    total_number_of_outcomes(vasya_toss, petya_toss, head_vasya, head_petya);
    outcomes(vasya_toss, petya_toss, head_vasya, head_petya);
    return 0;
}