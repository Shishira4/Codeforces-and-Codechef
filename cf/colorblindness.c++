//https://codeforces.com/contest/1722/problem/B
#include<iostream>
#include<string>
using namespace std;
void logic()
{
    int columns;
    cin >> columns; 
    string str1, str2;
    cin >> str1 >> str2;
    if(columns==1 && (str1=='B' || str1 == 'G' || str2=='B' || str2=='G'))
    {
        cout << "YES" << "\n";
        return;
    }
    for(int i=0; i<columns-1; i++)
    {
        if(str1[i]=='G' && str1[i+1]=='B' || str1[i]=='B' && str1[i+1]=='G' || str2[i]=='G' && str2[i+1]=='B' || str2[i]=='B' && str2[i+1]=='G')
        {
            cout << "YES" << "\n";
            break;
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    
}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i=0; i<test_cases; i++)
    {
        logic();
    }
    return 0;
}