#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char a,b,c,d;
	int num[4];
	cin>>a>>b>>c>>d;
	num[0] = (c-'0'+9)%10;
	num[1] = (d-'0'+9)%10;
	num[2] = (a-'0'+9)%10;
	num[3] = (b-'0'+9)%10;
	for (int i = 0; i < 4; ++i)
	{
		cout<<num[i];
	}
	cout<<endl;
	return 0;
}