#include <iostream>
#include <cmath>
using namespace std;
bool yes = true;
int main(){
	int count25(0),count50(0),count100(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		
		int temp;
		cin>>temp;
		if(temp==25){
			count25++;
		}
		else if (temp==50){
			if(count25!=0){
				count50++;
				count25--;
			}
			else{
				yes=false;
				break;
				}
				
		}
		else if(temp==100){
			if(count25!=0 && count50!=0){
				count100++;		
				count50--;
				count25--;
			}
			else if(count25>=3){
				count25=count25-3;
			}
			else{
				yes=false;
				break;
			}
		}
	}
	if(yes)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	return 0;
}
