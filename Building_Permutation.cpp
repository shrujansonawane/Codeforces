#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main()
{
	
	long long int n;
	cin>>n;
	int arr[n];
	
	for(long long int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	
	long long int ans = 0;
	
	for(long long int i=1;i<=n;i++){
		ans += (long long int)abs(arr[i-1]-i);
	}
	
	cout<<ans<<endl;
	
	return 0;
}
