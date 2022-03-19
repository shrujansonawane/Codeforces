#include<bits/stdc++.h>
using namespace std;
 
int main()
 
{
	int count =0;
	int n;
	cin>>n;
	while(n--){
		
		int n,m,o;
		cin>>m>>n>>o;
		if((m+n+o)>=2){
			count++;
		}
	}
	cout<<count<<endl;
	
    return 0;
 
}
