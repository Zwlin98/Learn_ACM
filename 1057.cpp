#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	for (int i = 0; str[i]!='\0'; ++i)
	{
		if(str[i]>='a'&&str[i]<='z')str[i]-=32;
		else if(str[i]>='A'&&str[i]<='Z')str[i]+=32;
	}
	cout<<str<<endl;
	return 0;
}