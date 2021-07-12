//Codeforces Beta Round #85 (Div. 2 Only)
#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    string l1, l2;
    cin >> l1 >> l2;
    transform(l1.begin(), l1.end(), l1.begin(), ::tolower);
    transform(l2.begin(), l2.end(), l2.begin(), ::tolower);

    if(l1.compare(l2)<0)
    {
        cout << "-1";
    }
    else if(l1.compare(l2)>0)
    {
        cout << "1";
    }
    else
    {
        cout<< "0";
    }    
    return 0;
}