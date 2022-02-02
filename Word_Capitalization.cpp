#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
	string s;
	cin>>s;
	
	int i=0;	
		if(s[i]>=65 && s[i]<=90){
			;
		}
		else{
			s[i] = s[i] -32;
		}
		
	cout<<s;
 
    return 0;
}
