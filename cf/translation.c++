#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string line, line_1;
    int length;
    cin >> line >> line_1;
    reverse(line.begin(), line.end());
    if(line == line_1)
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}