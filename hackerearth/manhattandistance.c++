//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/manhattan-2fc15b93/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long logic(vector <long long> &distance, int towns)
{
    sort(distance.begin(), distance.end());
	long long sum = 0, a,b; 
	for(int i = 1; i <= towns; i++)
	{
		a = distance[i]*(i - 1); 
		b = distance[i]*(towns - i);

		sum = sum + (a - b);
	}

	return sum;
}
void calculate(int total_towns)
{
    long long x_distance=0, y_distance=0, answer;
    vector <long long> x(total_towns+1), y(total_towns+1);
    answer = 0;
    for(int j=1; j<=total_towns;j++)
    {

        cin >> x[j] >> y[j];
    }
    
        x_distance = logic(x, total_towns);
        y_distance = logic(y, total_towns);
        answer = x_distance+y_distance;
    cout /*<< "ans"*/ << answer << "\n";
}
int main()
{
    int test_cases, total_towns;
    cin >> test_cases;
    for(int i=1; i<=test_cases; i++)
    {
        cin >> total_towns;
        calculate(total_towns);
    }
        
    return 0;
}