#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,i,j;
	cin>>n;
	for (i = 0; i < n; ++i)cout<<'*';
	cout<<'\n';
	for (i = 0; i < n-2; ++i)
	{
		cout<<'*';
		for (j = 0; j < n-2; ++j)cout<<' ';
		cout<<'*';
		cout<<'\n';	
	}
	for (i = 0; i < n; ++i)cout<<'*';
	cout<<'\n';
	return 0;
}