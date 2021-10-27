//https://codeforces.com/problemset/problem/617/B
#include<iostream>
#include<vector>
using namespace std;
bool check_division_exists(int total_pieces, vector<int> chocolate_nuts)
{
    for(int i=0; i<total_pieces;i++)
    {
        if(chocolate_nuts[i]==1)
        {
            return true;
        }
    }
    return false;
}
void logic(int total_pieces, vector<int> chocolate_nuts)
{
    
    bool division_exists;
    long long int number_of_divisions=1;
    division_exists = check_division_exists(total_pieces, chocolate_nuts);
    if(division_exists == false)
    {
        number_of_divisions = 0;
        cout << number_of_divisions;
    }
    else
    {
        for(int i=0; i<total_pieces;)
        {
            if(chocolate_nuts[i]==0)
            {
                i++;
                continue;
            }
            else
            {
                int zero;
                for(zero=0; i+zero < total_pieces; zero++)
                {
                    if(chocolate_nuts[i+zero+1]==1)
                    {
                        number_of_divisions = number_of_divisions*(zero+1);
                        //cout << "divisions" << number_of_divisions << "\n";
                        break;
                    }
                }
                i = i+zero+1;
            }
        }
        cout <<number_of_divisions;
    }

}
int main()
{
    int total_pieces;
    cin >> total_pieces;
    vector<int> chocolate_nuts(total_pieces+1);
    for(int i=0; i<total_pieces;i++)
    {
        //cout << i;
        cin >> chocolate_nuts[i] ;
        //cout << "choco" << chocolate_nuts[i] << "\n"; 
    }
    
    logic(total_pieces, chocolate_nuts); 
    return 0;
}
