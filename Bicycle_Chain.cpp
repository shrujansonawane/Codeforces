#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	int n,m,max(0),count(0),temp;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>temp;
		for(int j=0;j<n;j++){
			
			if(temp%arr1[j]==0){
				int x = temp/arr1[j];
				if(x>max){
					max=x;
					count=1;
				}
				else if(x==max){
					count++;
				}
				break;
			}	
		}
	}
	
	
	cout<<count<<endl;
	
	return 0;	
}
 
