#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,i;
	cin>>n;
	char     a[20];
	for ( i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a,a+n+1);
	reverse(a,a+n+1);
		for (i=0;i<n;i++)
		cout<<a[i];
		cout<<endl;
	return 0;
	
}