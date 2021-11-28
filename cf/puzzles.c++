//https://codeforces.com/problemset/problem/337/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int students, puzzles,minimum, difference_puzzle;
    cin >> students >> puzzles;
    vector<int> number_of_pieces(puzzles);
    for(int i=0; i<puzzles;i++)
    {
        cin >> number_of_pieces[i];
    }
    sort(number_of_pieces.begin(), number_of_pieces.end());
    minimum=number_of_pieces[puzzles-1];
    //cout<< "here "<< minimum << "\n";
    for(int i=0; i<puzzles; i++)
    {
        //cout << i << "\n";
        if(i+(students-1)<puzzles)
        {
            difference_puzzle = number_of_pieces[i+(students-1)] - number_of_pieces[i];
            //cout << number_of_pieces[i+(students-1)] << "-" << number_of_pieces[i] << "=" <<difference_puzzle << "\n";
            minimum = min(difference_puzzle, minimum);
            //cout << "loop"<< minimum << "\n";
        }
        
    }
    cout /*<< "ans "*/ << minimum;
    return 0;
}