#include <iostream>
 
using namespace std;
 
int main()
{
 
	int n,a,b,c,ans(0);
	cin>>n>>a>>b>>c;
	for(int i=0;i<=4000;i++){
		for(int j=0;j<=4000;j++){
			 
			 int kc = n - (i*a + j*b);
			 if(kc<0){
			 	break;
			 }
			
			double k = (kc/(double)c);
			 if(k==(int)k){
			 	ans=max(ans,(int)k+j+i);
			 }
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
