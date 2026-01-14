#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a[] = {0,2,3,5,4,6,8,5,44};

    int n = sizeof(a) / sizeof(a[0]);
	
	for (int num:a)
	{
		cout<<" "<<num;
	}
	cout<<endl;

	while(prev_permutation(a,a+n))
	{
	    for (int num:a)
		cout<<" "<<num;
			cout<<endl;
	
	}
		cout<<endl;
	return 0;
}