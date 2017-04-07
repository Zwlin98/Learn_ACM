#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int t=(m-2*n)/2;
	int j = n-t;
	if (m%2==1|m-2*n<0)
		cout<<"NO answer"<<endl;
	else
		cout<<j<<' '<<t<<endl;
	return 0;
}