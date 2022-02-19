#include <iostream>
 
using namespace std;
bool yes = false;
int main()
{
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	int n,m;
	cin>>n>>m;
	for(int i=0;i<25;i++){
		
		if(arr[i]==n && arr[i+1]==m){
			
			yes = true;
		}
	}
	if(yes){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
 
