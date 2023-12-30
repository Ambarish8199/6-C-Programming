#include<stdio.h>
#include<string.h>

int main()
{
	int l1,l2,i;
	char str1[] = " Raj";
	char str2[] = "Sir Vinay";
	l1 = strlen(str1);
	l2 = strlen(str2);
	for(i=0;i<=l1;i++)
	{
		str2[l2 + i] = str1[i];
	}
	printf("str2 : %s",str2);
    return 0;
}
