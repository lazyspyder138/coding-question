#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,max=0;
	    cin>>n>>k;
	    for(int i=1;i<=k;i++){

	       if(max<n%i){
	           max=n%i;
	       }

	    }
	    cout<<max<<endl;
	}

	return 0;
}
