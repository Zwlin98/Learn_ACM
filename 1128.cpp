#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n)
{
	int i;
	for (i = 2; i <=int(sqrt(n)); ++i)
	{
		if(!(n%i)) return 0;
	}
	return 1;
}

int primegenerator()
{
	static int k=2;
	while(1)
	{
		if(isprime(k)) 	
				return k++;	
		else k++;
	}
}

int main(int argc, char const *argv[])
{
	int n,j,i=0,key=1,ncopy;
	int yz[1000];
	cin>>n;
	ncopy=n;
	int prime = primegenerator();
	while(key!=ncopy)
	{
		if(!(n%prime))
		{
			yz[i++]=prime;
			n = n/prime;
			key*=prime;
			continue;
		}
		prime = primegenerator();
	}
	for(j=0;j<i-1;j++)
		cout<<yz[j]<<' ';
	cout<<yz[i-1]<<'\n';
	return 0;
}
