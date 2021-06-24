#include<iostream>
#include<string>
#include<minmax.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int length  = str.size();
    int k = str.size();
    //const int l = 55;
    for( int ch = 0; ch<=26; ch++)
    {
        
        int previous_index =-1, gap=0;
        for(int i=0; str[i]!= '\0'; i++)
        {
            if(str[i]=='a' + ch)
            {
                gap = max(gap, i -previous_index);
                previous_index=i;
            }
         }
        gap = max(gap, length - previous_index);
        //cout <<maximum;
        k = min(gap,k);
    }
    cout << k;
    
    return 0;
}