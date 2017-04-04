#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	int len = 0;
	ch = getchar();
	while(ch != '\n')
		{
			if(ch>='a'&&ch<='z')len++;
			if(ch>='A'&&ch<='Z')len++;
			ch = getchar();
		}
	cout<<len<<endl;
	return 0;
}