#include <iostream>
using namespace std;

int range(int n)
{
	int sum=0;
	for (int i = 1; i <=n; ++i)
	{
		sum+=i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n,sum=0;
	cin>>n;
	for (int i = 1; i <=n ; i++)
	{
		sum+=range(i);
	}
	cout<<sum<<endl;
	return 0;
}  