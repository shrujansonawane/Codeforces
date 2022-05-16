#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool yes = true;
bool gg = true;
int main () {
 
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	string s1 = s.substr(0, n);
	string s2 = s.substr(n, 2*n);
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	for(int i=0;i<n;i++){
		
			if(s1[0]>s2[0]){
				yes=false;
			}
			if(yes){
				if(s1[i]>=s2[i]){
					gg=false;
					break;
				}
			}
			else{
				if(s1[i]<=s2[i]){
					gg=false;
					break;
 
				}
			}	
			
	}
	if(gg){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	
	
	return 0;
	
}
