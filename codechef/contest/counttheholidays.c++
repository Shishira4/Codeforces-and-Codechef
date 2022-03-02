//https://www.codechef.com/START28C/problems/SUNDAY
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int number_of_festivals, coinciding_dates=0, total_festivals;
    cin >> number_of_festivals;
    vector<int> festival_dates(number_of_festivals);
    for(int i=0; i<number_of_festivals;i++)
    {
        cin >> festival_dates[i];
        if(festival_dates[i]==6 ||festival_dates[i]==7 || festival_dates[i]==13 || festival_dates[i]==14 || festival_dates[i]==20 ||festival_dates[i]==21 || festival_dates[i]==27 || festival_dates[i]==28)
        {
            coinciding_dates++;
        }
    }
    total_festivals = 8+ number_of_festivals - coinciding_dates;
    cout << total_festivals <<"\n";
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