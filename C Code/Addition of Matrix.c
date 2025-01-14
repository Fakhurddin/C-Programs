#include <stdio.h>
#include <string.h>
int main()
{
	char d[]="Zeeshan";
	int a,i=0,j=0;
	
	a=strlen(d);
	for( i=0;i<=a;i++)
	{
		for( j=0;j>=1;j++)
		{
			if(i+j<=a+1)
			{
				printf(" ");
			}
		printf("%c",d[i]);
		}
	printf("\n");
	}
}
