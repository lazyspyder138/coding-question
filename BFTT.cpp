#include<iostream>
using namespace std;
int count(int n){
int a,c=0;
while(n){
a=n%10;
if(a==3)
 c++;
n=n/10;
}
return c;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int co;
while(1){
n=n+1;
co=count(n);
if(co>=3)
{
cout<<n<<endl;
break;
}
}
}
return 0;
}
