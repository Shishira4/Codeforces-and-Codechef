//https://codeforces.com/contest/1675/problem/A
#include<iostream>
using namespace std;
void logic()
{
    int dog_food, cat_food, universal, total_dog, total_cat, remaining_dog, remaining_cat;
    cin >> dog_food >> cat_food >> universal >> total_dog >> total_cat;
    bool dog_recieve = true, cat_recieve = true;
    remaining_dog = total_dog -dog_food;
    remaining_cat = total_cat -cat_food;
    if(remaining_cat<=0 && remaining_dog>0)
    {
        if(remaining_dog<=universal)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else if(remaining_cat>0 && remaining_dog<=0)
    {
        if(remaining_cat<=universal)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else if(remaining_cat>0 && remaining_dog>0)
    {
        if(remaining_cat+remaining_dog<=universal || ((remaining_cat==0)&&(remaining_dog==0)))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        cout << "YES" << "\n";
    }
    
}
int main()
{
    int test_cases;
    cin>> test_cases;
    while(test_cases--)
    {
        logic();
    }
}