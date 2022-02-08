#include <iostream>
#include <vector>
#include <algorithm>

bool yes = false;

using namespace std;

bool comp( const pair<int,int> &a, const pair<int,int> &b){
    if(a.first<b.first){
    	return true;
	}
	else{
		return (a.first<b.first);
	}    
    return (a.second > b.second);

}

int main()
{
    
    int n;
    cin>>n;
    vector <pair <int, int> >vect;
    
    for(int i=0;i<n;i++){
    	int temp1,temp2;
    	cin>>temp1>>temp2;
    	vect.push_back( make_pair(temp1,temp2) );	
	}
    
    sort(vect.begin(),vect.end(),comp);

	for(int i=1;i<n;i++){
		if(vect[i-1].second>=vect[i].second && yes==false){
			if(vect[i-1].first<=vect[i].first){
				yes=true;
				break;
			}
		}
	}
	
	if(yes){
		cout<<"Happy Alex"<<endl;
	}
	else{
		cout<<"Poor Alex"<<endl;
	}
	
    return 0;
}
