//https://codeforces.com/contest/1634/problem/A
#include<iostream>
#include<string>
#include<algorithm>
//#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int length, operations, count =0;
    string word, rev_word, first_op, second_op;
    cin >> length >> operations;
    cin >> word;
    rev_word = reverse(word.begin(), word.end());
    first_op = word+rev_word;
    second_op = rev_word+word;
    while(operations--)
    {
        new_word = word+rev_word;
    }

}
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        logic();
    }
    return 0;
}