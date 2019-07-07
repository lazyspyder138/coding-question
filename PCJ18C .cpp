#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t){
int n,a,k;
cin>>n>>a>>k;
int sum=(n-2)*180;
int x=2*sum-2*a*n;
int y=n*(n-1);
int ang=a*y+(k-1)*x;
if(ang%y==0){
x=ang/y;
y=1;
cout<<x<<"\t"<<y<<endl;
}
else{
int an=__gcd(ang,y);
cout<<ang/an<<"\t"<<y/an<<endl;
}

t--;
}
}
