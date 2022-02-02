//
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int recipes, recommended, questions,left, right;
    const int SIZE = 200010;
    vector<int> admissible(SIZE,0);
    vector<int> admissible_sum(SIZE,0);
    vector<int> starting_at(SIZE,0);
    vector<int> ending_at(SIZE,0);
    cin>> recipes >> recommended >> questions;
    for(int i=0; i<recipes; i++)
    {
        cin >> left >> right;
        starting_at[left] = starting_at[left]+1;
        ending_at[right] = ending_at[right]+1;
    }
    vector<int> sum(SIZE,0);
    for(int i=1; i<SIZE; i++)
    {
        sum[i] = sum[i-1]+starting_at[i]-ending_at[i-1];
        if(sum[i]>=recommended)
        {
            admissible[i] =1;
        }
    }
    //cout<< "ad of 94"<<admissible[97]<<"\n";
    for(int i=1; i<SIZE; i++)
    {
        admissible_sum[i] = admissible_sum[i-1]+admissible[i];
    }
    for(int i=0; i<questions; i++)
    {
        cin >> left >> right;
       // cout<< "right "<< right << "   "<< admissible_sum[right]<<"\n";
       // cout<< "left "<< left-1<< "    "<< admissible_sum[left-1]<<"\n";
        cout << admissible_sum[right] - admissible_sum[left-1]<<"\n";
    }
    return 0;
}