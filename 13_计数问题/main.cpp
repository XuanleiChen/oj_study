#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n,x,count=0;
  cin>>n>>x;
  for (int i=1;i<=n;i++)
  {
  	int t=i;
  	while(t)
  	{
  		if (t%10==x)count++;
  		t/=10;
	  }
  }
    cout<<count<<endl;
	
	return 0;
}