#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
 
int main()
{
    long int n,m;
    cin>>n>>m;
    long int curr = 1;
    long long int min = 0;
    for(long int i=0;i<m;i++){
    	int temp;
    	cin>>temp;
    	if(temp>=curr){
    		min = min + (temp-curr);
		}
    	else if(curr>temp){
    		min = min + (n-(curr-temp));
		}
		curr=temp;
 
	}
	cout<<min<<endl;	
    return 0;
}

