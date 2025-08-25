#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	char s;
	
	int i=0,c=0;
	while(s=getchar()!=EOF)
	{
		i++;
		if(s[i]==' '||s[i]=='\n');
		else
		c++;
	}
     cout<<c<<endl;
	return 0;
}