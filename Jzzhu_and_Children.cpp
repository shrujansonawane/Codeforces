#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
	int n,m,last;
	double temp;
	double max=0;
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>temp;
		if(ceil(temp/m) >= max)
		{
			last=i;
			max = ceil(temp/m);
		}	
	}
	cout<<last<<endl;
	return 0;
}
