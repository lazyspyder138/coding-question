#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	   int x=abs(n-m);
	    if(x<=k){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<x-k<<endl;
	    }
	}
	return 0;
}
