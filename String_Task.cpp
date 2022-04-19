#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
    	
    	if(s[i]>=65 && s[i]<=90){
    		s[i]=s[i]+32;
		}
    	if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='y'){
    		;
		}
		else{
			
			cout<<".";
			cout<<s[i];
			
		}
	}
	
    return 0;
}
