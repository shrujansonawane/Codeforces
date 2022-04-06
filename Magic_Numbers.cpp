#include <bits/stdc++.h>
 
using namespace std;
bool yes=true;
int main()
{
	string s;
	cin>>s;
	for(long int i=0;i<s.length();)
	{
		
	if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
		i=i+3;
	}
	else if(s[i]=='1' && s[i+1]=='4'){
		i=i+2;
	}
	else if(s[i]=='1'){
		i=i+1;
	}
	else{
		yes=false;
		break;
	}
	}
	if(yes){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	} 	
    return 0;
}
