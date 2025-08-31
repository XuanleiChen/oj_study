#include <bits/stdc++.h>
using namespace std;

int main() {
   //0-670-82162-4
   string isbn;
   cin>>isbn;
   string dights;
   for(char c:isbn)
   {
   	if(c!='-')dights+=c;
   }
   int res=0;
   for (int i=0;i<10;i++)
   {
   	if(i=='X') res+=(10*(i+1));
   	else res+=(dights[i]*(i+1));
   }

    return 0;
}
