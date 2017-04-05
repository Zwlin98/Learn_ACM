#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string ch;
	string x = "No";
	getline(cin,ch);
	for (int i = 0;ch[i]!='\0'; ++i)
	{
		if(ch[i] == ch[i+1])
		{
			x = ch[i];
			break;
		}
	}
	cout<<x<<endl;
	return 0;
}