#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    const int SIZE = 26;
    int teams;
    cin >> teams;
    int n = teams*(teams-1)/2;
    //cout << "n " << n << "\n";
    string a,b,score;
    vector<int> alpha(SIZE,0);
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> score;
        alpha[a[0]-97] = alpha[a[0]-97]+int(score[0]);
        //cout << score[0];
        alpha[b[0]-97] = alpha[b[0]-97]+int(score[2]);
        //cout << "i " << i << "\n";
    }
    int max=0;
    for(int i=0; i<SIZE; i++)
    {
        cout << alpha[i] << "\n";
        if(alpha[i]>max)
        {
            max = i;
        }
    }
    cout << char(max+97) << "\n";
    return 0;
}