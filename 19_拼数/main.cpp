#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
	return a+b>b+a;//看看是字符a拼接在前面更大还是~
}
int main(void)
{
	int n,i;
	cin>>n;
	vector<string> a(n);
	for ( i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a.begin(),a.end(),cmp);

		for (i=0;i<n;i++)
		cout<<a[i];
		cout<<endl;
	return 0;
	
}