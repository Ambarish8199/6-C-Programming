#include<stdio.h>

int  main()
{
	char str1[] ="Prem";
	char str2[200];
	int i;
	printf("str1 : %s\n",str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	 } 
	 printf("str2 : %s",str2);
	 return 0;
}
