#include<stdio.h>

struct student 
{
    int rollno;
	float cgpa;
	struct data
	{
		char name[100];
    }b;
}a;
int main()
{
	scanf("%d",&a.rollno);
    scanf("%f",&a.cgpa);
    scanf("%s",a.b.name);
    printf("%d\n",a.rollno);
    printf("%f\n",a.cgpa);
    printf("%s",a.b.name);
    return 0;
}