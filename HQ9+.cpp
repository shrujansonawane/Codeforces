#include <iostream>
 
using namespace std;
bool yes = false;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>=33 && s[i]<=126){
			if(s[i]==72 || s[i]==81 || s[i]==57){
				yes = true;
			}
		}
	}
	if(yes){
		cout<<"YES"<<'\n';
	}
	else{
		cout<<"NO"<<'\n';
	}
	return 0;
}
