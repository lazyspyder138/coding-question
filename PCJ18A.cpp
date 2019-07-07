#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++)
  cin>>arr[i];
int c=0;
for(int i=0;i<n;i++){
if(x<=arr[i])
  c++;
}
if(c>0)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;
t--;
}
return 0;
}
