#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for (int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    int min,max;
	    min=max=0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        if(min==0){
	            min=k;
            }
	        if(max==0){
	            max=k;
            }
            if(k<min)
                min=k;
            if(k>max)
                max=k;
	    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}