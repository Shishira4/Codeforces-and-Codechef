#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, x=0; 
    string line;
    cin >> n;
    for(int i =1; i<=n;i++)
    {
        cin >> line;
        if(line.find('++')<line.length())
        {
            x++;
        }
        else if(line.find('--')<line.length())
        {
            x--;
        }
    }
    cout << x;
    return 0;
}