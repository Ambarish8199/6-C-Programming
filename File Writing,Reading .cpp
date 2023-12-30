#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch;
	FILE *fp;
	char str[] = "This Is A Good Code";
	fp = fopen("C:/New folder.txt","w");
	for(i=0;i<strlen(str);i++)
	{
		putc(str[i],fp);
	}
	fclose(fp);
	fp = fopen("C:/New folder.txt","r");
	while(getc(fp) != EOF)
	{
		ch = getc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}