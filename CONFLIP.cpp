#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int g;
	    cin>>g;
	    while(g--){
	        int l,n,q;
	        cin>>l>>n>>q;
	        if(n%2==0){
	            cout<<n/2<<endl;
	        }else{
	            if(l==q){
	                cout<<(n-1)/2<<endl;
	            }
	            else
	               cout<<(n+1)/2<<endl;
	        }
	    }
	}
	return 0;
}
