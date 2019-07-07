#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string word[n];
	    bool arr[n];
	    for(int i=0;i<n;i++){
	        cin>>word[i];
	        arr[i]=false;
	    }
	    for(int i=0;i<k;i++){
	        int l;
	        cin>>l;
	        string str;
	        for(int j=0;j<l;j++){
	            cin>>str;
	            for(int a=0;a<n;a++){
	                if(!arr[a])
	                  arr[a]=(word[a]==str);
	                else
	                   continue;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i])
	          cout<<"YES"<<" ";
	        else
	           cout<<"NO"<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
