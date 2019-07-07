#include <iostream>
using namespace std;
struct neruon{
    int w,b;
};
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,minx,max,sp=0,nsp=0,odd=0,even=0,o=0,e=0;
	    cin>>n>>minx>>max;
	    neruon new1[n];
	    for(int i=0;i<n;i++)
	       cin>>new1[i].w>>new1[i].b;
	    int x=3,y=4;
	    for(int i=0;i<n;i++){
	        x=new1[i].w*x+new1[i].b;
	        y=new1[i].w*y+new1[i].b;
	    }
	    if(x%2==0){
	        o=1;
	    }
	    if(y%2==0)
	       e=1;
	    int num=max-minx+1;
	    if(num%2==0){
	        if(e==1){
	            sp=sp+num/2;
	        }
	        if(o==1)
	          sp=sp+num/2;
	    }
	    else{
	        if(minx%2==0){
	            if(e==1)
	             sp=sp+num/2+1;
	            if(o==1)
	              sp=sp+num/2;
	        }
	        else{
	            if(e==1)
	             sp=sp+num/2;
	             if(o==1)
	               sp=sp+num/2+1;
	        }

	    }

	   cout<<sp<<"\t"<<num-sp<<endl;
	}
	return 0;
}
