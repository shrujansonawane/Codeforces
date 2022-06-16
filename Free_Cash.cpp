#include <iostream>
 
 
using namespace std;
 
int main(){
 
	int n;
	int a,b,a1,b1;
	cin>>n;
	cin>>a>>b;
	
	int ct(1),ctmax(1);
    
    for(int i=1;i<n;i++){
    	
    	cin>>a1>>b1;
    	if(a==a1 && b==b1){
    		ct+=1;
    		if(ct>ctmax){
    			ctmax=ct;
			}
		}
		else{
			ct=1;
		}
    	
    	a=a1;
    	b=b1;
    	
	}
	cout<<ctmax<<endl;
	return 0;
}
