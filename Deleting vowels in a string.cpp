#include <stdio.h>
#include <string.h>

int main()
{
	int i,j;
	char k,str[100];
	scanf("%s",str);
		int t=0;
	char str1[10] = "aeiou";
	for(i=0;i<strlen(str);i++)
		{
			for(j=0;j<strlen(str1);j++)
		    {  
		    if(str[i]	== str1[j])
		    {
		    	t++;
			}
		}
	}
	for (i=0;i<strlen(str) + 1;i++)
	{
		if ((str[i]=='a')||(str[i]=='e')||(str[i]=='o')||(str[i]=='i')||(str[i]=='u'))
		{
			char c;
			c = str[i];
			str[i] = str[i+1];
			str[i+1] = c;
		}
	}
	for (i=0;i<strlen(str)-t+1;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}