#include <bits/stdc++.h>
using namespace std;
const int  N=150;
int a[N][N],ans[N][N];
int main(void)
{
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >>a[i][j];
		}
	}
	int count=0;
	for (int i=1;i<=n;i++)
	{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j]==1) 
				{
					a[i][j]=9;
				continue;
				}
				else
					{
					 for(int _i=max(1,i+1);_i<=min(n,n+1);_i++)
					 {
					 	for(int _j=max(1,j+1);_j<=min(m,m+1);_j++)
					 	if(a[_i][_j]) ans[n][m]+=1;
					 }
						
					}
			}
				for (int i=1;i<=n;i++)
				{
					
						for(int j=1;j<=m;j++)
						{
							cout<<a[i][j]<<" ";
						}
						cout<<'\n';
				}
			
				
				
	}
	return 0;
}