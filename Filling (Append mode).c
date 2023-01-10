#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE *fa=NULL;
	char name[100];
	char a='F'; 
	
	fa=fopen("Fakhur.txt","a");
	if(fa==NULL) 
	{
		printf("Error");
		exit(0);	
	}
	
	printf("Enter Something: ");
	gets(name);
	
	fputs(name,fa);
	
	fclose(fa);

}