#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	int t;
	t = strcmp(str1,str2);
	if (t==0)
	{
		printf("Equal Strings");
	}
	else
	{
		printf("Unequal Strings");
	}
	return 0;
}