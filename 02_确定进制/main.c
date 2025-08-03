#inluce <bits/stdc++.h>
using namespace std;

int main(void)
{
	int p,q,r;
int jzadd(int a,int b)
{
	int count=0;
	for (int i=2;i<=16;i++)
	{
		int res1=0,res2=0;
		do
		{
			res1+=(a%10*power(i,count))
			res2+=(a%10*power(i,count))
			count++;
		}while((a/=10)&&(b/=10));
		if (res1+res2==r)
		return i;
		else
		return 0;
		
}
	
	cin>>p>>q>>r;
	int res=jzadd(p,q);
	cout<<res<<endl;
	return 0;
}