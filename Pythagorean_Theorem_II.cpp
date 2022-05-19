#include <iostream>
 
#include <cmath>
 
using namespace std;
 
int main()
{
 
 
	int i, j, k;
	int n, m, x;
	int a, b; double c;
 
	cin>>n;
 
	long long int cnt = 0;
	for (a = 1; a <= n; a++)
	{
		for (b =a + 1; b <= n; b++)
		{
			c = a*a + b*b;
			c = sqrt(c);
 
			if (floor(c) == c && c <= n)
				cnt++;
		}
	}
 
	cout<<cnt;
 
	return 0;
}
