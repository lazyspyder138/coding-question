#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    char ch[n];
	    cin>>ch;
	    long int count=0;
	    for(int i=0;i<strlen(ch);i++){
	        if(ch[i]=='1')
	         count++;
	    }
	    count=(count+1)*count/2;
	    cout<<count<<endl;
	}
	return 0;
}
