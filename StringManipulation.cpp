#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, c;
	    string s, ans = "YES";
	    cin>> n >> s;
	    
	    if (n%2 != 0) ans = "NO";
	    else {
	        for (int i=0; i<n; i++) {
	            c = count(s.begin(), s.end(), s[i]);
	        
	            if (c%2 != 0) {
	                ans = "NO";
	                break;
	            }
	        }
	    }
	    cout<< ans <<endl;
	}
	return 0;
}