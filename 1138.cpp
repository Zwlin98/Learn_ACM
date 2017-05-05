#include <stdio.h>
int main()
{
	char a[1000];
	int i=0;
	while(gets(a))
	{
       	for(i=0;a[i]!='\0';i++)
		{
		  if(a[i]=='/'&&a[i+1]=='/')
	          break;
		  else
		    printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
