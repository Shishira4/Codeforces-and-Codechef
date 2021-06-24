#include<vector>
using namespace std;

class CountPairsWithXOR {
public:
    int getCountOfPairs(vector<int> arr, int L, int R) {
        // Code here
		int count =0;
        int l = arr.size();
        for(int i=0; i<l; i++)
        {
			
            for(int j=i; j<l; j++)
            {
                if(arr[i] ^ arr[j] >= L && arr[i] ^ arr[j] <= R)
                {
                    count++;                
                }        
            }			
        }
        return count;
}
};