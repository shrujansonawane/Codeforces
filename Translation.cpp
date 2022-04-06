#include <bits/stdc++.h>
#include <string>
using namespace std;
bool yes = true;
int main()
{
	int n;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	n=s1.length();
	for(int i=0;i<n;i++){
		
		if(s1[i] != s2[n-i-1]){
			yes=false;
		}
		
	}
	if(yes){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    return 0;
}
