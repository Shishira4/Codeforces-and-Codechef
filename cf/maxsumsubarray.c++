//To find out the maximum sum of any sub array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,size,max_sum;
    cin >>n;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //loop for checking size-wise
    for(int i=0,size=1;i<n;i++)
    {        
        //first iteration size is 1 so check for size 1 -> will be to check for just the highest value in the array
        if(size==1)
        {
            int a = sizeof(arr)/sizeof(arr[0]);
            max_sum = *max_element(arr, arr + n);
        }
        //for iterations above size 1, for size 2, we have to check size 2 every 2 elemnts on the array
        else
        {
            
        }


    }
    return 0;
}