#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0,res=0;
for(int i=0;i<n-k+1;i++)
{
    sum=0;
     for(int j=i;j<i+k;j++)
           sum=sum+arr[j];
     if(res<sum)
       res=sum;


}
cout<<res<<endl;
}
return 0;
}
