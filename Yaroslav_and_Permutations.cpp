#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool yes = true;
 
int main () {
	
	int n,x,count(1),max_count(1);
	cin>>n;
	int arr[101];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(int i=0;i<n-1;i++){
		
		if(arr[i]==arr[i+1]){
			count++;
			if(count>max_count){
				max_count=count;
			}
		}
		else{
			count=1;
		}
	}
	if(max_count<=(n+1)/2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
	
}
