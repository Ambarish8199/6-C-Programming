#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
    strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str1,str2)==0)
	{
		printf("Palindrome Strings");
	}
	else
	{
		printf("Not Palindrome Strings");
	}
	return 0;
}