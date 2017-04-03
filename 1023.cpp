#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char f,a,b;
	f = getchar();
	a = getchar();
	b = getchar();
	switch(f)
	{
		case'+':cout<<a+b<<endl;break;
		case'-':cout<<a-b<<endl;break;
	}
	return 0;
}