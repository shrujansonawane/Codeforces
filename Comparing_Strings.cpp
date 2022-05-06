#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	int n1,n2;
	char x,y;
	cin>>s1;
	cin>>s2;
	n1=s1.length();
	n2=s2.length();
	if(n1!=n2){
		cout<<"NO"<<endl;	
	}
	else{
		int count1(0),count2(0);
		for(int i=0;i<n1;i++){
			
			if(s1[i] != s2[i]){
				++count1;
				if(count1 == 1){
					x=s1[i];
					y=s2[i];
				}
				else if(count1 == 2){
					if(s1[i]==y && s2[i]==x)
						count2 = 1;
				}
				else
					break;
			}
			
		}
		if(count2 == 1 && count1 == 2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
 
}
