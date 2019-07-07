#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	static int arr[100000];
	for(int i=0;i<t;i++){
	    int x,y,k,n,eff,a=0;
	    cin>>x>>y>>k>>n;
	    eff=x-y;
	    for(int j=0;j<n;j++){
	        int c,p;
	        cin>>p>>c;
	        if(a==0){
	            a=eff<=p&&k>=c?1:0;
	        }
	       }
	       if(a==1)
	         arr[i]=1;
	}
	for(int i=0;i<t;i++)
	{
	    if(arr[i]==1)
	     cout<<"LuckyChef"<<endl;
	    if(arr[i]==0)
	     cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
