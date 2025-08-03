#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool isprime (int n) {
	if (n<2) return false;
	for (int i=2; i<=n/i; i++)
		if (n%i==0) return false;
	return true;

}
bool isprime_reverse(int n) {
 string s=to_string(n);
     reverse(s.begin(),s.end());
      n=stoi(s);
      if (isprime(n))
      return true;
      else
      return false;	       
}
int  main (void)

{
	long long  m,n;
	cin>>m>>n;
	int res[n];
	int rescount=0;
	for (int j=m; j<=n; j++) {	
	if (isprime(j)&&isprime_reverse(j))
		res[rescount++]=j;
	}
	if (rescount!=0) {

		for (int k=0; k<rescount-1; k++)
			cout<<res[k]<<",";
		cout<<res[rescount-1]<<endl;
	} else
		cout<<"No"<<endl;

}

