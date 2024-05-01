#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==2) count++;
	    }
	    if(count%8==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}