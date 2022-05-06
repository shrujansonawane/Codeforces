#include <iostream>
 
using namespace std;
 
int main()
{
	
	long long int n,min(10000000000),max(-10000000000);
	cin>>n;
	long long int arr1[n],arr2[n];
	for(int i=0;i<n;i++){
		long long int a,b;
		cin>>a>>b;
		if(a<=min)
			min=a;
		if(b>=max)
			max=b;
		arr1[i]=a;
		arr2[i]=b;
	
	}
 
	
	int ind = -1;
	
	for(int i=0;i<n;i++){
		if(arr1[i]==min && arr2[i]==max){
			ind=i+1;
		}
		
	}
	cout<<ind<<endl;
	return 0;
}
