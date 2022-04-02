#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int c5 = 0;
	int c0 = 0;
    cin>>n;
    for(int i=0;i<n;i++){
    	int temp;
    	cin>>temp;
    	if(temp == 5){
    		c5=c5+1;
		}
		else if(temp == 0){
			c0=c0+1;
		}
	}
	double z = floor(c5/9)*9;
	
	if(c0==0){
		cout<<-1<<endl;
	}
	else if(c5==0){
		cout<<0<<endl;
	}
	else if(c5>=9 && c0>0) {
		
		for(int i=0;i<z;i++){
			cout<<5;
		}
		for(int i=0;i<c0;i++){
			cout<<0;
		}
	}
	else
		cout<<0;
 
		
    return 0;
}
