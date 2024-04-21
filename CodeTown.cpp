#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string name;
	cin>>t;
	while(t--){
	    cin>>name;
	    for(int i=0;i<8;i++)
	    {
	        if(name.at(i)=='A'||name.at(i)=='E'||name.at(i)=='I'||name.at(i)=='O'||name.at(i)=='U')
	        {
	            switch(i){
	                case 1:
	                name.at(i)='O';
	                break;
	                case 3:
	                name.at(i)='E';
	                break;
	                case 5:
	                name.at(i)='O';
	                break;
	            }
	        }
	        else{
	            switch(i){
	                case 0:
	                name.at(i)='C';
	                break;
	                case 2:
	                name.at(i)='D';
	                break;
	                case 4:
	                name.at(i)='T';
	                break;
	                case 6:
	                name.at(i)='W';
	                break;
	                case 7:
	                name.at(i)='N';
	                break;
	                
	            }
	        }
	    }
	    
	    if(name=="CODETOWN")
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
