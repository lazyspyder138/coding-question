#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    int count=0;
	    for(int i=0;i<n-1;){
	        if(arr[i+1]-arr[i]<=d){
	            count++;
	            i=i+2;
	        }
	        else if(arr[i+1]-arr[i]>d){
	            i=i+1;
	        }
	    }
	    cout<<count<<endl;

	return 0;
}
