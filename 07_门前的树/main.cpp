#include <bits/stdc++.h>
using namespace std;
int main (void)
{
	int l,m;
	cin>>l>>m;
	
	int *check=  (int *)malloc(l*sizeof(int));
	check[0]=0;
	
	for (int i=0;i<m;i++)
	{
		int begin,end;
		cin>>begin>>end;
		for (int i=begin;i<=end;i++)
		check[i]=1;
	}
	int res=0;
	for (int i=0;i<l;i++)
	{
		if (check[i]==1) res++;
	}
	cout<<l+1-res;
	
 return 0;
   
}