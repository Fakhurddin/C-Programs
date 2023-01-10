#include <stdio.h>
int main()
{
	FILE *f1=NULL,*f2=NULL;
	int line=0,flag=0,pos; 
	char ch1,ch2;

	f1=fopen("Abc.txt","r");
	f2=fopen("Abc.txt","r");
	
	if(f1==NULL || f2==NULL)
	{
		printf("Error");
		exit(1);
	}
	
	do
	{
		ch1=getc(f1);
		ch2=getc(f2);
		
		if((ch1=='\n') && (ch2=='\n'))
		{
			++line;
			pos=0;
		}
		
		if(ch1 != ch2)
		{
			flag=1;
			break;
		}
	}while(ch1 != EOF && ch2 != EOF);
	
	if(flag)
		printf("Different");
	else
		printf("Same");
		
	fclose(f1);
	fclose(f2);		
}	


