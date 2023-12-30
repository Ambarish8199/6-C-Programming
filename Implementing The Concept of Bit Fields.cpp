#include<stdio.h>

struct acc 
{
	unsigned int a : 1;
	unsigned int b : 3;
}k;
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	k = {x,y};
	printf("Number After Applying Bit Field Is\n%d\n%d",k.a,k.b);
	return 0 ;
}