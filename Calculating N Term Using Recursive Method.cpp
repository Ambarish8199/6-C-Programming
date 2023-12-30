#include<stdio.h>

int sum(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}

int sum(int n)
{
	int sumn;
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 3;
	}
	else
	sumn= sum(n-2) + sum(n-1) + sum(n-3);
	return sumn ;
}
