#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
	// your code goes here
	FASTER;
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int i=11;
	    int count=0;
	    for(int i=11;i>=0;){
	        if((p-pow(2,i))>=0){
	            p=p-pow(2,i);

	           //cout<<p<<"\t";
	           count++;
	        }
	        else
	           i=i-1;

	    }
	    cout<<count<<endl;
	}
	return 0;
}
