#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	   int k,min1,min2;
	   min1=min2=0;
        for(int j=0;j<n;j++){
            cin>>k;
            if(min1==0){
                if(min2==0){
                    min2=k; 
                    continue;
                }
                if(k<min2){
                    min1=k;
                }
                else{
                    min1=min2;
                    min2=k;
                }
            }
            if(k<min2){
                if(k<min1){
                    min2=min1;
                    min1=k;
                }
                else if(k!=min1)
                    min2=k;
                else
                    continue;
            }
        }
        if(min2==min1||n==1)
            cout<<"-1"<<endl;
        else
            cout<<min1<<" "<<min2<<endl;
	}
	return 0;
}