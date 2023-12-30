#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch;
	char str[100] = "This Is A Good Code";
	FILE *fp;
    fp = fopen("C:/New folder.txt","w");
    for(i=0;i<=strlen(str);i++)
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