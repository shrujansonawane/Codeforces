#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
	
	int m,n,ans(0);
	cin>>m>>n;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr,arr+m);
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			break;
		}
		else{
			arr[i] = abs(arr[i]);
		}
		ans=ans+arr[i];
	}
	cout<<ans<<endl;
	return 0;	
}
