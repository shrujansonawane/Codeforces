#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool cmp (pair<int,int> a,pair<int,int> b){
	
	if(a.first>b.first)
        return true;
 
    else if(a.first==b.first)
        return a.second<b.second;
 
    else
        return false;
}
 
int main(){
	
	vector<pair <int,int> >vect;
	
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int temp1,temp2;
		cin>>temp1>>temp2;
		vect.push_back(make_pair(temp1,temp2));
	}
 
	sort(vect.begin(), vect.end(),cmp);
	
 
	int x = vect[k-1].first;
	int y = vect[k-1].second; 
	
	int count(0);
 
	for (int i=0; i<n; i++)
    {	
    	
   		if(vect[i].first == x){
        	if(vect[i].second == y){
        		count++;
			}
 
    	 }
    
  		
    }
	
	cout<<count<<endl;
	
	return 0;
	
}
