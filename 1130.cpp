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
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(isprime(n)) cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}