#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,x=3;
cin>>t;
while(t--)
{
    cin>>a>>b>>c;
    int d=max(a,b);
    int e=max(d,c);
    int f=max(d,e);
   
   if(f==a&&f>50)
   {
        cout<<"A"<<endl;
   }
   else if(f==b&&f>50)
   {
       cout<<"B"<<endl;
   }
   else if(f==c&&f>50)
   {
        cout<<"C"<<endl;
   }
   else{
       cout<<"NOTA"<<endl;
   }
}
}
