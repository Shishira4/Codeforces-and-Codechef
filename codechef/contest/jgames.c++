//https://www.codechef.com/COOK139D/problems/JGAMES
//solution - https://www.codechef.com/viewsolution/59739303
#include<iostream>
using namespace std;
void logic()
{
    int starting_number, moves;
    //bool is_even=false, is_ood = false;
    cin >> starting_number >> moves;
    if(starting_number%2==0 && moves%2!=0 || starting_number%2!=0 && moves%2==0)
    {
        cout << "Jay" << "\n";
    }
    else
    {
        cout << "Janmansh" << "\n";
    }
}
int main()
{
    int test_cases, time;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}