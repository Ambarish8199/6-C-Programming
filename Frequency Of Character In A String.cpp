#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,count = 0;;
	char str[100],ch;
	gets(str);
	for(ch='a';ch<='z';ch++)
	{
		for(i=0;i<strlen(str);i++)
		{
			if(str[i] == ch)
			{
				count = count + 1;
			}
		}
		printf("frequency for characters %c in string\n%d\n",ch,count);
		count = 0;
		printf("%d\n",count);
	}
	return 0;
}