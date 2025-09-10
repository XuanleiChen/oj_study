#include<bits/stdc++.h>
using namespace std;
int arr(int n)
{
	int res=1;
	  int i=1;
  while(i<=n/2)
  {
    res+=arr(i);
    i++;
  }

  return res;

}
int main(void)
{
	int n;
	cin>>n;
	int res=arr(n);
	cout<<res<<endl;
	
	return 0;
}