#include <iostream>
#include <algorithm>
using namespace std;
bool yes = true;
int main(){
	int s,n;
	cin>>s>>n;
	pair<int, int> arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;		
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		
		if(arr[i].first>=s){
			yes = false;
			continue;
		}
		s=s+arr[i].second;
	}
	if(yes){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
		}
	return 0;
}
