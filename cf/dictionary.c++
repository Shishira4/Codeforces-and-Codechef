//https://codeforces.com/contest/1674/problem/B
#include<iostream>
#include<string>
#include<map>
using namespace std;
void logic()
{
    string lang;
    cin >> lang;
    map<string, int> occurence;
    int index = 1;
    string word = "aa";
    for(word[0]='a'; word[0]<='z'; word[0]++)
    {
        for(word[1]='a'; word[1]<='z'; word[1]++)
        {
            if(word[0]!=word[1])
            {
                occurence[word]=index++;
            }
        }
    }
    cout << occurence[lang] << "\n";
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
}