#include<vector>
using namespace std;
class MissingNumbers {
public:
	vector<int> getMissingNumbers(vector<int> array) {
		// Code here
		int n = array.size();
		const int l = 55;
		vector<int> a[l];
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j!=array[i])
				{
					a[i]=j;					
			}
				return &arr;
		}
	}
	}
};