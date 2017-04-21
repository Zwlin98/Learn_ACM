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
	int n;
	cin>>n;
	if (isprefect(n))
		cout<<"yes\n";
	else
		cout<<"no\n";
	return 0;
}	