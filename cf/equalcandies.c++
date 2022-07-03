
//
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void logic()
{
    int boxes;
    cin >> boxes;
    vector<int> candies(boxes);
    for(int i=0; i<boxes; i++)
    {
        cin >> candies[i];
    }
    int least = *min_element(candies.begin(), candies.end());
    int sum=0;
    for(int i=0; i<boxes; i++)
    {
        sum = sum + (candies[i]-least);
    }
    cout << sum << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
    return 0;
}