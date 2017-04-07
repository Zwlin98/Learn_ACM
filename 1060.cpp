#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int scores;
	char grade = 'E';
	cin>>scores;
	if(scores>=60)grade = 'D';
	if(scores>=70)grade = 'C';
	if(scores>=80)grade = 'B';
	if(scores>=90)grade = 'A';
	cout<<grade<<endl;
	return 0;
}