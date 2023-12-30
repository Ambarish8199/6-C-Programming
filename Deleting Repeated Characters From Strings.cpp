#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k;
	char str[100];
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i] == str[j])
			{
				for(k=j;k<strlen(str);k++)
                {
				char t ;
				t = str[k];
				str[k] = str[k+1];
				str[k+1] = t;
			    }
			}
		}
	}
	printf("%s",str);
	return 0;
}