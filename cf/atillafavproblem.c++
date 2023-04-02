#include<iostream>
#include<string>
using namespace std; 
void logic()
{
    int len, alpha_size=0, max_size=0;
    string word;
    cin >> len;
    cin >> word;
    for(int i=0; i<len; i++)
    {
        alpha_size = int(word[i]);
        if(alpha_size>max_size)
        {
            max_size= alpha_size;
        }
    }
    cout << max_size-96 << "\n";
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