#include <iostream>
 
using namespace std;
 
int main()
{
	string m,n;
	cin>>m;
	cin>>n;
	for(int i=0;i<n.length();i++){
		
		if(m[i]==n[i]){
			cout<<0;
		}
		else{
			cout<<1;
		}
		
	}
    return 0;
}
