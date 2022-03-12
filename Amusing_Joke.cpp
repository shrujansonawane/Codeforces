#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool yes = true;
int main()
{
   	string m,n,o,t;
   	cin>>m;
   	cin>>n;
   	cin>>o;
	t=m+n;
   	sort(t.begin(),t.end());
   	sort(o.begin(),o.end());
	
	if(o==t){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
