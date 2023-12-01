#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	char str[n] ;
	scanf("%s",str);
	int j;
	for(j=0;j<(n+1)/2;j++)
    {
       int t;
       t = str[j];
       str[j] = str[n-j-2];
       str[n-j-2] = t;
	}
	
	printf("%s",str);
	return 0;
}