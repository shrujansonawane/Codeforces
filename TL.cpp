#include <iostream>
 
using namespace std;
 
 
int main () {
	
	int max1(0),max2(1000),min(1000);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp>=max1)
			max1=temp;
		if(temp<min)
			min=temp;
	}
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		if(temp<max2)
			max2=temp;
	}
	int x = max(2*min,max1);
	if(x<max2)
		cout<<x<<endl;
	else
		cout<<"-1"<<endl;
	
	
	return 0;
	
}
