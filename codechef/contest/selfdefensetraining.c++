//https://www.codechef.com/START28C/problems/SELFDEF
//solution link - https://www.codechef.com/viewsolution/59486034
#include<iostream>
#include<vector>
using namespace std;
void logic()
{
    int total_women, eligible_women=0;
    cin >> total_women;
    vector<int> age(total_women);
    for(int i=0; i<total_women; i++)
    {
        cin >> age[i];
        if(age[i]>=10 && age[i]<=60)
        {
            eligible_women++;
        }
    }
    cout << eligible_women<<"\n";
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