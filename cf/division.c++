
#include<iostream>
using namespace std;
void logic()
{
    int rating;
    cin >> rating;
    if(rating<=1399)
    {
        cout << "Division 4" << "\n";
    }
    else if(rating>=1400 && rating <= 1599)
    {
        cout << "Division 3" << "\n";
    }
    else if(rating>=1600 && rating <= 1899)
    {
        cout << "Division 2" << "\n";
    }
    else
    {
        cout << "Division 1" << "\n";
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