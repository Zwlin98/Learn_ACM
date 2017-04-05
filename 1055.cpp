#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string ch;
	int N = 0;
	getline(cin,ch);
	while(ch!="@")
	{
		N++;
		getline(cin,ch);
	}
	cout<<N<<endl;
	return 0;
}