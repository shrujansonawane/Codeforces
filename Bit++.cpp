#include<bits/stdc++.h>
using namespace std;
 
int main()
 
{
	int x =0;
	int n;
	cin>>n;
	while(n--){
		
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
		
		if(s[i]=='+' && s[i+1]=='+'){
			x=x+1;
		}
		else if(s[i]=='-' && s[i+1]=='-'){
			x=x-1;
		}
	}
	}
	cout<<x<<endl;
	
    return 0;
 
}
