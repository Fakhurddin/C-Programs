#include <stdio.h>
int main()
{
	FILE *f1=NULL;
	int line;
	char text[10][50];
	
	f1=fopen("Abc.txt","w");
	if(f1==NULL)
	{
		printf("Error");
		exit(1);
	}

	fputs("Hello\nThis\nis\nFakhur",f1);
	fclose(f1);
	
	f1=fopen("Abc.txt","r");
	if(f1==NULL)
	{
		printf("Error");
		exit(1);
	}

	while(!feof(f1))
	{
		if(fgets(text[line],50,f1)!= NULL)
		{
			line++;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		printf("%s",text[i]);
	}
}