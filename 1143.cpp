#include <stdio.h>
void move(char f ,char t)
{
	printf("%c->%c\n",f,t);
}

void hanota(int n,char from,char depend,char to)
{
	if(n==1) move(from,to);
	else
	{
		hanota(n-1,from,to,depend);
		move(from,to);
		hanota(n-1,depend,from,to);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	hanota(n,'a','b','c');
	return 0;
}