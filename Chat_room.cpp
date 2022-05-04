#include <iostream>
 
using namespace std;
 
string b="hello";
int j(0),count(0);
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]==b[j]){
			j++;
			count++;
			if(count ==5)
				break;
		}
}
	if(count==5){
		cout<<"YES"<<endl;
	}
	else{
	
		cout<<"NO"<<endl;
	}
	return 0;
}
