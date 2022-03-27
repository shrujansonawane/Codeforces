#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int t = 0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin >> a[i] >> b[i];
	}
	for(int i=0;i<n;i++)
	{
		bool r(false), l(false), u(false), d(false);
		for(int j=0; j<n; j++)
		{
			if(a[j]>a[i] && b[j]==b[i]){
				r=true;
			}
			if(a[j]<a[i] && b[j]==b[i]){
				l=true;
			}
			if(a[j]==a[i] && b[j]>b[i]){
				u=true;
			}
			if(a[j]==a[i] && b[j]<b[i]){
				d=true;
			}
		}
		
		if (r && l && u && d){
			t++;
		}
	}
	
	cout<< t <<endl;
	
    return 0;
}
