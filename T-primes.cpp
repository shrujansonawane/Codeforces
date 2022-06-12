#include <iostream>
#include <cmath>
 
using namespace std;
 
 
bool isPrime(long long n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
 
int main(){
	
	int z;
	cin>>z;
	while(z--){
		long long int temp1;
		long long int temp2;
		cin>>temp1;
		temp2 = sqrt(temp1);
		if(temp2*temp2==temp1 && isPrime(temp2)==true){
			cout<<"YES"<<endl;
		}
			
		else
			cout<<"NO"<<endl;
		
	}
	
	return 0;
}
