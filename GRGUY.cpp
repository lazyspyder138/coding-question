#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1;
	    cin>>str2;
	   long long int max=1000000000;
	   long long int n=str1.length();
	   long long int dp1[str1.length()],dp2[str2.length()];
	    if(str1[0]=='#'){
	        dp1[0]=max;
	    }
	    else
	        dp1[0]=0;
	    if(str2[0]=='#')
	       dp2[0]=max;
	   else
	       dp2[0]=0;
	   int flag=0;
	   for(int i=0;i<n;i++)
	   {if(str1[i]==str2[i]&&str1[i]=='#')
	     { cout<<"No"<<endl;flag=1;break;}
	   }
	   if(flag==0){
	    for(long long int i=1;i<str1.length();i++){


	            if(str1[i]=='#')
	               dp1[i]=max;
	           else
	            dp1[i]=min(dp1[i-1],dp2[i-1]+1);
	           if(str2[i]=='#')
	              dp2[i]=max;
	           else
	            dp2[i]=min(dp2[i-1],dp1[i-1]+1);

	    }
	   long long  int res=min(dp1[n-1],dp2[n-1]);
	    cout<<"Yes"<<endl;cout<<res<<endl;
	   }
	}
	return 0;
}
