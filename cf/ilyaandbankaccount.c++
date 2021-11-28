//https://codeforces.com/problemset/problem/313/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, last_digit, secondlast;
    cin>> n;
    if(n>0)
    {
        cout << n;
    }
    else
    {
        string number = to_string(n);
        //cout << number << "\n";
        string number_lastdigit = number.substr(0,number.length()-1);
        //cout<< number_lastdigit << "\n";
        string number_secondlast = number.substr(0,number.length()-2)+ number[number.length()-1];
        //cout << number_secondlast << "\n";
        last_digit = stoi(number_lastdigit);
        secondlast = stoi(number_secondlast);
        if(last_digit>secondlast)
        {
            cout << last_digit;
        }
        else
        {
            cout << secondlast;
        }
    }
    return 0;
}