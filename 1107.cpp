#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int N,n,sum=0;
	cin>>N;
	for (int i = 0; i < N; ++i)
	{
		cin>>n;
		sum+=n;
	}
	cout<<sum<<endl;
	return 0;
}