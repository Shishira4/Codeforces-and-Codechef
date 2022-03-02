//https://www.codechef.com/START28C/problems/CARCHOICE
#include<iostream>
using namespace std;
void logic()
{
    int first_economy, second_economy, petrol, diesel;
    cin >> first_economy >> second_economy >> diesel >> petrol;
    int firstcar_cost, secondcar_cost;
    firstcar_cost = diesel/first_economy;
    secondcar_cost = petrol/ second_economy;
    if(firstcar_cost<secondcar_cost)
    {
        cout << "-1" << "\n";
    }
    else if(firstcar_cost==secondcar_cost)
    {
        cout << "0" << "\n";
    }
    else
    {
        cout << "1" << "\n";
    }

}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases;i++)
    {
        logic();
    }
    return 0;
}