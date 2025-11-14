#include <bits/stdc++.h>
using namespace std;
int extra count=1;
void zdjg(int n)
{
	for (int i=1;i<=n/2;i++)
	  count++;
	n/=2;
	zdjg(n);
}
int main(void)
{
	int n;
	cin>>n;
	zdjg(n);
    cout<<count<<endl;
	return 0;
}