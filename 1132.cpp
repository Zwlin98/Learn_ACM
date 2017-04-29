#include <iostream>
using namespace std;

int big (int a,int b)
{
	for(int i = (a>b?a:b);;i++)
	if(!(i%a)&&!(i%b)) return i;
}
int small(int a,int b)
{
	for(int i = (a>b?b:a);;i--)
	if(!(a%i)&&!(b%i)) return i;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<small(x,y)<<' '<<big(x,y)<<'\n';
	return 0;
}