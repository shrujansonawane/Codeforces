#include <iostream>
#include <math.h>
using namespace std;
int cal(int n, int arr[]){
	int temp;
	while(n>0){
		for(int i=0;i<7;i++){
			n = n-arr[i];
			if(n<=0){
				temp=i;
				break;
			}
		}
	}
	return temp+1;
	
}
int main(){
	int n;
	cin>>n;
	int arr[7];
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	cout<<cal(n,arr)<<endl;
	
	
	return 0;
}
