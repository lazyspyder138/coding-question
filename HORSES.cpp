#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   long long int arr[n],min=1000000000;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        if(min>(arr[i+1]-arr[i])){
	            min=arr[i+1]-arr[i];
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
