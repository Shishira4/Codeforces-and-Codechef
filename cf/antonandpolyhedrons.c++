//https://codeforces.com/problemset/problem/785/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test_cases, sum=0;
    string polyhedron;
    cin >> test_cases;
    for(int i=0; i<=test_cases; i++)
    {
        polyhedron="";
        cin >> polyhedron;
        if(polyhedron=="Tetrahedron")
        {
            sum = sum+4;
        }
        else if(polyhedron=="Cube")
        {
            sum = sum+6;
        }
        else if(polyhedron=="Octahedron")
        {
            sum = sum+8;
        }
        else if(polyhedron=="Dodecahedron")
        {
            sum = sum+12;
        }
        else if(polyhedron=="Icosahedron")
        {
            sum = sum+20;
        }
    }
    cout << sum;
    return 0;
}