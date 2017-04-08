#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n1,n2,num = 0;
	cin>>n1>>n2;
	for (int i = n1; i <=n2 ; ++i)
	{
		if(i%3!=0)num++;
		if(i%3!=0&&num%5!=0)cout<<i<<' ';
		if(i%3!=0&&num%5==0)cout<<i<<endl;
	}
	return 0;
}  