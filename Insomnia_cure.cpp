#include <bits/stdc++.h>
using namespace std;
int safe=0;
int main()
{
	int k,l,m,n,d;
	cin>>k;
	cin>>l;
	cin>>m;
	cin>>n;
	cin>>d;
	
	for(int i=1;i<=d;i++){
		if((i%k==0) || (i%l==0) || (i%m==0) || (i%n==0)){
			safe=safe+1;
		}
	}
	cout<<safe;	
	return 0;
}
