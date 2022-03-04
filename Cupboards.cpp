#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,temp;
	int left = 0;
	int right = 0;
	cin>>t;
	temp=t;
	while(t--){
		int l,r;
		cin>>l>>r;
		left = left + l;
		right= right + r;
	
	}
	cout<<min(left,temp-left)+min(right,temp-right);
	return 0;
}
