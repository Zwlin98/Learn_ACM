#include <iostream>
#include <cmath>
using namespace std;

int cf(int n)
{
	int k=0;
	for (int i = 0; i < n; ++i)
	{
		k+=pow(10,i);
	}
	return k;
}

int main(int argc, char const *argv[])
{
	int n,a,sum=0;
	cin>>n>>a;
	for (int i = 1; i <=n; ++i)
	{
		sum+=a*cf(i);
	}
	cout<<sum<<endl;
	return 0;
}  