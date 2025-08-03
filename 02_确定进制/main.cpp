#include <bits/stdc++.h>
using namespace std;

int jzadd(int a,int b,int r)
{
	
	for (int i=2;i<=16;i++)
	{
		int count=0,t1=a,t2=b;
		int res1=0,res2=0;
		do
		{
			res1+=(t1%i*pow(i,count));
			res2+=(t2%i*pow(i,count));
			count++;
		}while((t1/=i)&&(t2/=i));
		if (res1+res2==r)
		return i;
		else if (i==16)
		return 0;
		
}
}
int main(void)
{
	

	int p,q,r;
	cin>>p>>q>>r;
	int res=jzadd(p,q,r);
	cout<<res<<endl;
	return 0;
}