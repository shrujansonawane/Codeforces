#include<iostream>
 
bool yes = true;
using namespace std;
 
int main(){
 
	int n;
	cin>>n;
	int c1(0),c2(0),c3(0),c4(0),c6(0);
	for(int i=0;i<n;i++){
		
		int temp;
		cin>>temp;
		if(temp==5 || temp==7){
			yes = false;	
			}
		else if(temp==1)
			c1++;
		else if(temp==2)
			c2++;
		else if(temp==3)
			c3++;
		else if(temp==4)
			c4++;
		else if(temp==6)
			c6++;
	}
	
	if(yes && c1==c2+c3 && c1 == c4+c6 && c2>=c4){
		for(int i=0;i<c4;i++)
			cout<<"1 2 4\n";
		for(int i=0;i<c6-c3;i++)
			cout<<"1 2 6\n";
		for(int i=0;i<c3;i++)
			cout<<"1 3 6\n";
	}
	else
		cout<<"-1\n";
		
    return 0;
}
