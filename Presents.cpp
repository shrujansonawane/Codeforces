#include <iostream>
 
 
using namespace std;
 
int main(){
	
	int n,p;
	cin>>n;
	
	int arr[n];
	
	for(int i=1;i<=n;i++){
		cin>>p;
		arr[p-1]=i;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	
	return 0;
	
}
