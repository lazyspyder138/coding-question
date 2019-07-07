#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int n){
    int minu=arr[0];
    int pos=0;
    for(int i=0;i<n;i++){
        if(minu>arr[i]){
            minu=arr[i];
            pos=i;
        }
    }
    return pos;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      {cin>>arr[i];
	      sum+=arr[i];}
	    int count=0,i=min(arr,n);
	    count=sum-n*arr[i];
	    cout<<count<<endl;
	}
	return 0;
}
