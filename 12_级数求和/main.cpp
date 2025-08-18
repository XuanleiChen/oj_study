#include <bits/stdc++.h>
using namespace std;
int main(void)
{
   float sn=0;
   int k;
   cin>>k;
   for (int i=1;;i++)
   {
   	sn+=1.0/i;
   	if (sn>k) 
   	{
   		cout<<i;break;
	   }
   	
   }
	

	
	return 0;
}