#include <stdio.h>
int main()
{
	char word[10];
	int i = 0; 
	gets(word);
	for (;word[i]!='\0'; ++i)
	{
		if(word[i]=='w')word[i]='a';
		else if (word[i]=='x') word[i]='b';
		else if (word[i]=='y') word[i]='c';
		else if (word[i]=='z') word[i]='d';
		else if (word[i]=='W') word[i]='A';
		else if (word[i]=='X') word[i]='B';
		else if (word[i]=='Y') word[i]='C';
		else if (word[i]=='Z') word[i]='D';
		else word[i]+=4;
	}
	puts(word);
	return 0;
}