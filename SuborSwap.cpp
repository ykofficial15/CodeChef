#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
long long gcd(long long a, long long b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}
int main(){
    int t; cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        cout << gcd(x, y) << endl;
    }
    return 0;
}