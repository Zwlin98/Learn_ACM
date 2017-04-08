#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int y0,y1,m0,m1,d0,d1;
	cin>>y0>>m0>>d0>>y1>>m1>>d1;
	if (m1<m0|(m1==m0&&d1<d0))y1-=1;
	cout<<y1-y0<<endl;
	return 0;
}