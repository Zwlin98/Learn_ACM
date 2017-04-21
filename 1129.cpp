#include <iostream>
using namespace std;

int isprefect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		if(!(n%i))sum+=i;
	}
	return sum==n;
}
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	for (int i = a; i <=b; ++i)
	{
		if(isprefect(i)) cout<<i<<'\n';
	}
	return 0;
}