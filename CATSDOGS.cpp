#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int c,d,l;
	    cin>>c>>d>>l;
	    long long int min;
	    long long int max=(c+d)*4;
	    if(c<=2*d)
	      min=d*4;
	    else
	      min=4*d+4*(c-2*d);
	    if(l%4!=0){
	        cout<<"no"<<endl;
	    }
	    else{
	        if(l>=min&&l<=max){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}
