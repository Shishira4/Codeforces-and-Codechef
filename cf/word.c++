//https://codeforces.com/problemset/problem/59/A
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int lower_count=0, upper_count =0;
    for(int i=0; i<word.size(); i++)
    {
        if(islower(word[i]))
        {
            lower_count++;
        }
        else if(isupper(word[i]))
        {
            upper_count++;
        }
    }
    if(lower_count > upper_count)
    {
        for(int i=0; i<word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }   
        
    }
    else if( lower_count < upper_count)
    {
        for(int i=0; i<word.size(); i++)
        {
            word[i] = toupper(word[i]);
        }  
    }
    else
    {
        for(int i=0; i<word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }    
    }
    cout << word;
    return 0;
}