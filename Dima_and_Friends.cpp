#include <iostream>
 
using namespace std;
 
int main() {
	int n,total,sum,temp;
	sum = 0;
	total = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		sum=sum+temp;
	}
	for(int i=1;i<=5;i++){
		if((sum+i)%(n+1) != 1){
			total++;
		}
	}
	cout<<total<<endl;
	return 0;
}
