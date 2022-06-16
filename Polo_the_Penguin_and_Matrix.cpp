#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main ()
{
	
	int no_of_rows, no_of_columns, difference;
    cin>>no_of_rows>>no_of_columns>>difference;
 
    vector <int> A(no_of_rows*no_of_columns, 0);
 
    set <int> remainder;
 
    int possible = true;
    for(int i = 0; i < no_of_rows*no_of_columns; i++)
    {
        cin>>A[i];
 
        remainder.insert(A[i]%difference);
    }
 
    if(remainder.size() > 1)
        possible = false;
 
    sort(A.begin(),A.end());
 
    int middle = A.size()/2;
    int median = A[middle];
 
    int minimum_no_of_moves = 0;
    for(int i = 0; i < A.size(); i++)
        minimum_no_of_moves += abs(A[i] - median)/difference;
	
	if(possible){
		cout<<minimum_no_of_moves<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	   
    return 0;
    
}
