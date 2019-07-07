#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	       cin>>arr[i];
	    std::set<int> s;
	    for(int i=0;i<n;i++){
	        s.insert(arr[i]);
	    }
	    cout<<n-s.size()<<endl;
	}
	return 0;
}
