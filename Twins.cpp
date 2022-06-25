#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool comp(int a, int b){
    return a>b;
}
 
int main(){
    
    int n,sum(0),ans(0);
    cin>>n;
    int arr[n];
 
    for(int i=0;i<n;i++){
    	int temp;
    	cin>>temp;
    	sum=sum+temp;
        arr[i]=temp;
    }
 
    sort(arr,arr+n,comp);
	int count(0);
	
    for(int i=0;i<n;i++){
		if(ans<=sum){
			count++;
			ans=ans+arr[i];
    		sum=sum-arr[i];
			
		} 
		else{
			break;
		}   
    }
	
	cout<<count<<endl;
	
    return 0;
 
}
