#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int sumc=0,sumk=0;
	    if(k>n-k)
	      {
	          for(int i=0;i<k;i++)
	            sumc+=arr[n-i-1];
	          for(int i=0;i<n-k;i++)
	            sumk+=arr[i];
	      }
	     else{
	         for(int i=0;i<k;i++)
	           sumk+=arr[i];
	          for(int i=k;i<n;i++)
	            sumc+=arr[i];
	     }
	     cout<<sumc-sumk<<endl;
	}
	return 0;
}
