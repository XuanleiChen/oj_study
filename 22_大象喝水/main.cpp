#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int x,h;
	cin>>h>>x;
	int res=0;
	res=x*x*3.14*h;
	int r=(20*1000/res)+1;
	cout<<r<<endl;
	return 0;
}