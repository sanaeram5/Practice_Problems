// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	//code here.
    	int i;
    	sort(arr,arr+arr_size);
        while(!(arr[arr_size-1]^=arr[arr_size-2]))
            arr_size--;
        if(arr_size-1)
        	return arr[arr_size-2];
        else
            return -1;
        }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends