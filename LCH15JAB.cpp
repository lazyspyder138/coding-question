#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int chr[27]={0};
	    for(int i=0;i<str.length();i++){
	        chr[str[i]-'a']++;
	    }
	    int y=0;
	    for(int i=0;i<str.length();i++){
	        if(chr[str[i]-'a']==str.length()-chr[str[i]-'a'])
	            {y=1;break;}
	    }
	    if(y==1)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	}
	return 0;
}
