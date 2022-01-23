#include <iostream>
#include <string>
 
using namespace std;
bool yes;
bool is(int n){
	yes=false;
	int a,b,c,d,temp;
	temp=n/10;
	a=temp%10;
	b=(temp/10)%10;
	d=n%10;
	c=n/1000;
	if(a != b && a != c && a != d && b != c && b != d && c != d){
	
		yes=true;
	}
	return yes;
}
 
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<9001;i++){
		
		n = n + 1;
		if(is(n)){
			cout<<n<<endl;
			break;
		}
		
	}
 
    return 0;
}
