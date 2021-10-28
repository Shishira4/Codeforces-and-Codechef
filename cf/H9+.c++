//https://codeforces.com/problemset/problem/133/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length;
    bool valid_language= false;
    string language;
    cin >> language;
    length = language.length();
    for(int i=0; i<length;i++)
    {
        if(language[i]== 'H'|| language[i]== 'Q' || language[i]== '9')
        {
            valid_language = true;
        }
        else
        {
            continue;
        }
    }
    if(valid_language== true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}