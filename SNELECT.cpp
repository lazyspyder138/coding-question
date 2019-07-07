#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int  cs=0,cm=0;
	    int eat=0;
	    for(int i=0;i<str.length()-1;){
	        if(str[i]==str[i+1]){
	            i=i+1;
	            continue;
	        }
	        else if(str[i]=='m'&&str[i+1]=='s'||str[i]=='s'&&str[i+1]=='m')
	            {i=i+2;
	            eat++;}
	    }
	    for(int i=0;i<str.length();i++){
	        if(str[i]=='s')
	          cs++;
	        else if(str[i]=='m')
	            cm++;
	    }
	    if(cs-eat>cm)
	      cout<<"snakes"<<endl;
	    else if(cs-eat==cm)
	       cout<<"tie"<<endl;
	    else
	      cout<<"mongooses"<<endl;
	}
	return 0;
}
