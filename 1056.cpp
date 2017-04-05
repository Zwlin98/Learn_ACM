#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string ch;
	int N = 0;
	getline(cin,ch);
	char key;
	cin>>key;
	for (int i = 0; ch[i]!='\0'; ++i)
	{
		if (ch[i]==key)
		{
			N++;
		}
	}	
	cout<<N<<endl;
	return 0;
}
