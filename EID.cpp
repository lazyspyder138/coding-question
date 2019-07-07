#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     int arrr[n];
	     for(int i=0;i<n;i++){
	         cin>>arrr[i];
	     }
	    sort(arrr,arrr+n);
	    int mi=abs(arrr[1]-arrr[0]);
	    for(int i=1;i<n-1;i++){
	        if(mi>abs(arrr[i+1]-arrr[i])){
	            mi=abs(arrr[i+1]-arrr[i]);
	        }
	    }
	    cout<<mi<<endl;
	}
	return 0;
}
