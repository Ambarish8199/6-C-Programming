#include<stdio.h>
#include<string.h>

int main()
{
	int l,i;
	char str[100];
	gets(str);
	l = strlen(str);
	char *ptr = str;
	for(i=0;i<l;i++)
	{
		printf("%c",*(ptr + l - i -1));
	}
	return 0;
}
