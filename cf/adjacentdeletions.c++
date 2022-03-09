//https://codeforces.com/contest/1650/problem/0
//https://codeforces.com/contest/1650/submission/148878680 - solution
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    string s;
    char c;
    cin >> s >> c;
    int index_of_c;
    bool can_convert=false;
    //if index of c is odd -> no
    //if even -> yes
    for(int i=0; i<s.length();i++)
    {
        if(s[i]==c)
        {
            index_of_c =i;
            if(index_of_c%2==0)
            {
                cout << "yes" << "\n";
                can_convert=true;
                break;
            }
        }
    }
    if(can_convert==false)
    {
        cout << "no" << "\n";
    }
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