#include<stdio.h>

union student 
{
	char name[];
	int marks[];
	int rollno;
}s1;
 
float per(int marks[],int n);

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1.marks[i]);
	}
	scanf("%s",&s1.name);
	scanf("%d",&s1.rollno);
	printf("Name Is : %s\n",s1.name);
	for(i=0;i<n;i++)
	{
	 printf("Marks Is : %d\n",s1.marks[i]);
	}
	
	printf("Roll No. Is : %d\n",s1.rollno);
	printf("Percentage Is : %f%%",per(s1.marks,n));
	return 0;
}

float per(int marks[],int n)
{
	int sum =0,i ;
	for(i=0;i<n;i++)
	{
		sum = sum + s1.marks[i];
	}
	return ( sum/n );
}

