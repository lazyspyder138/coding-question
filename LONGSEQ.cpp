#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n=str.length();
	    int count[2]={0};
	    for(int i=0;i<n;i++){
	        if(str[i]=='1')
	           count[1]++;
	        else if(str[i]=='0')
	           count[0]++;
	    }
	    if(n==1)
	      cout<<"Yes"<<endl;
	    else if(n>1)
	    {
	        if(count[0]==1&&count[1]>=1)
	          cout<<"Yes"<<endl;
	        else if(count[1]==1&&count[0]>=1)
	          cout<<"Yes"<<endl;
	        else
	           cout<<"No"<<endl;
	    }
	}
	return 0;
}
