#include <iostream>
 
using namespace std;
 
int main()
{
	int n,k,l,c,d,p,nl,np,temp;
	int total_lit,total_lim,total_sal,min_d;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	total_lit=k*l;
	total_lim=c*d;
	min_d=total_lit/nl;
	total_sal=p/np;
	temp=min(total_lim, min_d);
	cout<<min(temp,total_sal)/n;
	
	return 0;
}
