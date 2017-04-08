#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 1; i < n; ++i)
	{
		if (i%5==0&&i%7==0)
			cout<<i<<' ';
	}
	cout<<endl;
	return 0;
}