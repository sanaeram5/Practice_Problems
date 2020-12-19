// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    
    // your code here
    int count=1;
    int k=1;
    int key;
    sort(a,a+size);
    if(size==1)
        return a[0];
    else{
        for(int i=1;i<size;i++){
        if(a[i]==a[i-1]){
            k++;
            if(k>count){
                count=k;
                key=i;
            }
        }
        else{
            k=1;
        }
    }
    if(count>size/2)
        return a[key];
    else
        return -1;    
    }
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends