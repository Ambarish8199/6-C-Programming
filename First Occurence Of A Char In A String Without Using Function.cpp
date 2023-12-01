#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char str[100],c;
	scanf("%s",str);
	fflush(stdin);
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i] == c)
		{
			printf("First Occurence Of c Is At %d in The String",i+1);
			break;
		}
	}
	return 0;	
}