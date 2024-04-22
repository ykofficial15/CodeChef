#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,h; cin>>x>>h;
	    int ans=0,i=0;
	    while(h>0 && i<5){
	        h=h-(x/2);
	        ans++;
	        i++;
	    }
	    while(h>0){
	        h=h-x;
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	
	
	return 0;
}