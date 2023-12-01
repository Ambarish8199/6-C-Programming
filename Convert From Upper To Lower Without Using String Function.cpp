#include<stdio.h>

int main()
{
	char str[100] ;
	scanf("%s",str);
	int i =0;
	while(str[i]!='\0')
	{
		str[i] = str[i] + 32 ;
		i++;
	}
	printf("%s",str);
	return 0;
}