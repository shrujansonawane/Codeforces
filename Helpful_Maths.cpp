#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
	string m,n;
	cin>>m;
	
	for(int i=0;i<m.length();i++){
		if(m[i]!='+'){
			
			n.push_back(m[i]);
		}
	}
	sort(n.begin(), n.end());
	cout<<n[0];
	for(int i=1;i<n.length();i++){
		cout<<"+"<<n[i];
	}
	return 0;
}
