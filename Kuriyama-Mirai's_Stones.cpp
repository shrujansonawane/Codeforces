#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long long int n, m, type, l, r;
    long long int arr[100010],sum[100010]={0},sum2[100010]={0};
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i-1];
        sum[i]=sum[i-1]+arr[i-1];
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;++i)
        sum2[i]=sum2[i-1]+arr[i-1];
    cin>>m;
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1){
            cout<<sum[r]-sum[l-1]<<endl;
        }
        else{
            cout<<sum2[r]-sum2[l-1]<<endl;
        }
       
    }
    return 0;
}
