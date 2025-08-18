#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a[7],t;int i,maxunhappy=0,day=0;

	for (i=0;i<7;i++)
	{
		int a,b;
		cin>>a>>b;
		t=(a+b-8);
		if (t>maxunhappy)
		{
				maxunhappy =t;
				day=i+1;
		}
	
		
	}
	
 cout<<day<<endl;
	
	return 0;
}

	

