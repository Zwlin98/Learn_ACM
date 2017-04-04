#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char a;
	cin>>a;
	if(a>='a'&&a<='z')cout<<"lower"<<endl;
	else if(a>='A'&&a<='Z')cout<<"upper"<<endl;
	else if(a>='0'&&a<='9')cout<<"digit"<<endl;
	else cout<<"other"<<endl;
	return 0;
}