#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    string s;
 	bool yes=false;
    cin>>s;
    for(int i=0;i<s.length();i++){
    	
    	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
    		i=i+2;
    		if(yes){
    			cout<<" ";
    		}
    		continue;	
		}
    	else{
    		yes=true;
    		cout<<s[i];
		}
	}
    return 0;
}
