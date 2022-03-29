//https://codeforces.com/contest/1658/problem/0
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    int cosplayers, count_one =0, min=0;
    cin >> cosplayers;
    string line;
    cin >> line;
    //ensure between 2 zeroes, there are 2 1's 
    for(int i=0; i<cosplayers; i++)
    {
        if(line[i]=='0')
        {
            if(i+2< cosplayers)
            {
                if(line[i+1]=='0')
                {
                    min = min+2;
                }
                else if(line[i+2]=='0')
                {
                    min = min+1;
                }
            }
            else if(i+1<cosplayers)
            {
                if(line[i+1]=='0')
                {
                    min = min+2;
                }
            }
        }
    }
    cout << min << "\n";
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