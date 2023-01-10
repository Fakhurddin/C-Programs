#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,cnt=0;
	char name[25];
	
	scanf("%s",name);
	
	while(name[i]!='\0')
	{
		i++;
		cnt++;
	}
	printf("%d",cnt);
	
	
	
	
	
}
