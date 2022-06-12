#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	int c1(0),c0(0),c0max(-1);
	while(n--){
		
		int temp;
		cin>>temp;
		if(temp==1){
			c1=c1+1;
			if(c0>0){
				c0=c0-1;
			}
		}
		else{
			c0=c0+1;
			if(c0>c0max){
				c0max=c0;
			}
		}	
	}
	
	cout<<c1+c0max<<endl;
	return 0;
}
