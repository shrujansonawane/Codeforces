#include <iostream>
#include <cmath>
 
using namespace std;
bool yes = true;
 
int main () {
	
	string s;
	cin>>s;
	int count(0), x;
	for(int i=0;i<s.length();i++){
 
		if(s[i]==48 && yes==true){
			x=i;
			yes = false;
		}
 
	}
	if(yes){
		s.erase(s.begin() + 1);
		cout<<s<<endl;
	}
	else{
		s.erase(s.begin() + x);
		cout<<s<<endl;
	}
 
	return 0;
	
}
