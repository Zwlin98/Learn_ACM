#include <iostream>
using namespace std;
int sxh(int n)
{
	int g = n%10;
	int s = n%100/10;
	int b = n/100;
	if(g*g*g+s*s*s+b*b*b==n) return n;
	else return 0;
}

int main(int argc, char const *argv[])
{
	int n,ans=0;
	cin>>n;
	for (int i = 100; i < n; ++i)
		if(sxh(i)) {ans++;cout<<i<<'\n';}
	if(!ans) cout<<"No Answer\n";
	return 0;
}