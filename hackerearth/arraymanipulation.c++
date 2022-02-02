//https://www.hackerrank.com/challenges/crush/problem?h_r=internal-search
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size, operations, left, right, summand;
    cin >> size >> operations;
    //vector<int> arr(size+1,0);//1 indexed array
    vector<long long> starting(size+2,0);
    vector<long long> ending(size+1,0);
    vector<long long> answer(size+1,0);
    for(int i=0; i<operations;i++)
    {
        cin >> left >> right >> summand; 
        starting[left] = starting[left]+summand;
        //cout<< "left"<<starting[left]<<"\n";
        ending[right] = ending[right]+summand; 
        //cout<< "right"<<ending[right]<<"\n";
    }
    long long max = answer[1];
    for(int i=1; i<=size;i++)
    {
        answer[i] = answer[i-1]+ starting[i] - ending[i-1];
        if(answer[i]>max)
        {
            
            max = answer[i];
            //cout << "max: " << max;
        }
    }
    cout << max;
    return 0;
}