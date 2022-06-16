#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
 
	long long int n,m;
	long long int arr[27]={};
	string s;
	long long int ans(0);
	
	cin>>n>>m;
	cin>>s;
	
	for(int i=0;i<n;i++){
		arr[s[i]-'A']++;
	}
	
	sort(arr,arr+27);
	
	for(int i=26;i>=0 && m;--i){
		if(arr[i]<=m){
			m=m-arr[i];
			ans=ans+arr[i]*arr[i];
		}
		else{
			ans=ans+m*m;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
