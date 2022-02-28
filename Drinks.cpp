#include <bits/stdc++.h>
using namespace std;
double sum =0;
int main()
{
    int n,m;
    double temp;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>m;
    	sum=sum+m;		
	}
	temp=sum/n;
	cout<<fixed<<setprecision(12)<<temp<<endl;
	return 0;
}
