#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
cin>>t;
while(t){
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i=i+2){
sum=sum+(n-i+1)*(n-i+1);
}
cout<<sum<<endl;
t--;
}
	return 0;
}
