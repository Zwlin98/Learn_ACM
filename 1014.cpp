#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	int j,t;
	t = (n-2*m)/2;
	j = m-t;
	cout<<j<<' '<<t
	<<endl;
	return 0;
}