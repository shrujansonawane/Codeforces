#include<iostream>
 
using namespace std;
 
int main()
{
	int n,temp,c1(0),c2(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp==100){
			c1++;
		}
		else{
			c2++;
		}
	}
	
	c2=c2%2;
	c1=c1-(c2*2);
	if(c1%2==0 && c1>=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
 
	return 0;
 
}
