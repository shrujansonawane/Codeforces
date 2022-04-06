#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
	int n,count(1);
	cin>>n;
 
	string inter,temp2,temp3;
	for(int i=0;i<n;i++){
		
		cin>>inter;
		if(i==0){
			temp2=inter;
			continue;
		}
		if(inter==temp2){
			
			count++;
		}
		else if( inter!=temp2){
			temp3=inter;
		}
	}
		if(count>(n-count)){
			cout<<temp2<<endl;
		}
		else{
			cout<<temp3<<endl;
		}
	
    return 0;
}
