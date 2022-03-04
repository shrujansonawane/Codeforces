#include <bits/stdc++.h>
using namespace std;
 
int main()
{	
	int ent,ext,total,min;
	total=0;
 
	min=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		
		cin>>ext>>ent;
		total=total-ext+ent;
		if(total>min){
			min=total;
		}
	}
	cout<<min;
	return 0;
}
