#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, min = 10000, max = -1, temp, count = -2;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin>>temp;
        if (temp > max){
            max = temp;
            count += 1;
        }
        if (temp < min){
            min = temp;
            count += 1;
        }
    }
    if(count < 0){
        count = 0;
    }
    cout<<count<<endl;
    return 0;
}
