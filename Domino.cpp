#include<iostream>
 
bool yes = false;
 
using namespace std;
 
int main(){
	
	int n;
	int sum1(0),sum2(0);
	cin>>n;
	for(int i=0;i<n;i++){
		int temp1,temp2;
		cin>>temp1>>temp2;
		if(n==1 & temp1%2 + temp2%2 == 1){
			cout<<-1<<endl;
			return 0;
		}
		sum1=sum1+temp1;
		sum2=sum2+temp2;
		
		if(temp1%2 + temp2%2 == 1)
			yes=true;
	}
		
	if(sum1%2==0 && sum2%2==0){
		cout<<0<<endl;
	}
	else if(yes && sum1%2==1 && sum2%2==1){
		cout<<1<<endl;
	}
	else
		cout<<-1<<endl;
	
    return 0;
}
