#include <iostream>
using namespace std;

int fact(int);
int main(int argc, char const *argv[])
{
	int sum=0,n;
	cin>>n;
	for (int i = 1; i <=n ; ++i)
	{
		sum+=fact(i);
	}
	cout<<sum<<endl;
	return 0;
}
int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <=n; ++i)
	{
		sum = sum*i;
	}
	return sum;
}