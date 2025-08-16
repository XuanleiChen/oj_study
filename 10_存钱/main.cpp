#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a[12];
	int count=0;
	int res=0;
	for (int i=0;i<12;i++)
	{
			count+=300;
		cin>>a[i];
		count-=a[i];
	if(count<0)
		 {
		 	res=-(i+1);
		 
		 	break;
		 
		 }
		    if (count>=100)
		    {
		
		  int t=count-count%100;
		 res=res+t;
		 count-=t;
		 	}
		
		
	   }
	
	if (res<0) cout<<res<<endl;
	else	   
	cout<<count+res*1.2<<endl;
	

	
	return 0;
}