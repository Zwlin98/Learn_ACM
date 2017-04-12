#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int N,n;
	int big = 0,small = 0,zero =0;
	cin>>N;
	for (int i = 0; i < N; ++i)
	{
		cin>>n;
		if(n>0)big++;
		if(n<0)small++;
		if(n==0)zero++;
	}
	cout<<big<<'\n'
		<<small<<'\n'
		<<zero<<endl;
	return 0;
}