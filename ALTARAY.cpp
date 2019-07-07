#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int arr[n],arr1[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    arr1[n-1]=1;
	    for(int i=n-2;i>=0;i--){

	       if(arr[i]<0&&arr[i+1]>0){
	           arr1[i]=arr1[i+1]+1;
	       }
	       else if(arr[i]>0&&arr[i+1]<0)
	         arr1[i]=arr1[i+1]+1;
	       else
	         arr1[i]=1;

	}
	for(int i=0;i<n;i++){
	    cout<<arr1[i]<<" ";

}

}
	return 0;
}
