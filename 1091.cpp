#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,sum;
	cin>>n;
	if (n%2==0)
		sum = 0-n/2;
	else
		sum = 0-(n-1)/2+n;
	cout<<sum<<endl;
	return 0;
}  