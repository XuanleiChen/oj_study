#include <iostream>
using namespace std;
string c="012345679ABCDEF";//对应字符。
void f(int x,int m){  //x为十进制整数   m要转换的进制基数
	if(x/m) f(x/m,m);//继续递归。
	cout<<c[x%m];//倒序输出。
}
int main(){
	int x,m;
	cin>>x>>m;//输入。
	f(x,m);//递归。
	return 0;
}
