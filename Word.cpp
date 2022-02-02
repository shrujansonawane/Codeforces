#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
	int low,up;
	low = 0;
	up = 0;
	string s;
	cin>>s;
	for( int i=0;i<s.length();i++){
		if(s[i]>=97){
			low=low+1;
		}
		else{
			up=up+1;
		}
	}
	for(int i=0;i<s.length();i++){
		
		if(up>low){
			if(s[i]>=97){
				s[i]=s[i]-32;
			}
		}
		else if(low>=up){
			
			if(s[i]<=90){
				s[i]=s[i]+32;
			}
		}	
			
		}
 
	cout<<s;
    return 0;
}
