#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;
 
int main()
{
	
	long long int t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	string s;
	cin>>s;
	
	char schar1;
	char schar2;
	long long int x,y;
	x=ex-sx;
	y=ey-sy;
	
	if(x>0)
		schar1='E';
	else
		schar1='W';
		
	if(y>0)
		schar2='N';
	else
		schar2='S';
		
	x=abs(x);		
	y=abs(y);
	
	long long int count(0);
	
	
	for(long long int i=0;i<s.length();i++){
		
		if(s[i]==schar1)
			x--;
		else if(s[i]==schar2)
			y--;
			
		count++;
		
		if(x<=0 && y<=0)
			break;
	}
	
	if(x<=0 && y<=0 && count<=t)
		cout<<count<<endl;
	else
		cout<<"-1"<<endl;
	
	return 0;
}
