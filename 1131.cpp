#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n)
{
	int i;
	if(n==1) return 0;
	for (i = 2; i <=int(sqrt(n)); ++i)
	{
		if(!(n%i)) return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int k1,k2,i,k=0;
	int prime[1000];
	cin>>k1>>k2;
	for (i = k1; i <= k2; ++i)
	{
		if(isprime(i))
			prime[k++] = i;
	}
	cout<<k<<'\n';
	for (i = 0; i <k-1; ++i)
	{
		cout<<prime[i]<<' ';
	}
	cout<<prime[k-1]<<'\n';
	return 0;
}