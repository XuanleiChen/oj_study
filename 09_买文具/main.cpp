#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,a1,b,b1,c,c1,res1,res2,res3;
    cin>>n;
    cin>>a>>a1>>b>>b1>>c>>c1;
    res1=(ceil(1.0*n/a))*a1;
     res2=(ceil(1.0*n/b))*b1;
     res3=(ceil(1.0*n/c))*c1;
    cout<<min({res1,res2,res3})<<endl;
    return 0;
}