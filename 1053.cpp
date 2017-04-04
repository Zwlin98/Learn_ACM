#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	int digitNum = 0,nullNum = 0;
	int	englishNum = 0,otherNum = 0;
	ch = getchar();
	while(ch != '\n')
		{
			if(ch>='0'&&ch<='9')digitNum++;
			else if(ch>='a'&&ch<='z')englishNum++;
			else if(ch>='A'&&ch<='Z')englishNum++;
			else if(ch==' ')nullNum++;
			else otherNum++;
			ch = getchar();
		}
	cout<<englishNum<<' '
		<<digitNum<<' '
		<<nullNum<<' '
		<<otherNum
		<<endl;
	return 0;
}