#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,cnt=0;
	char a[500];
	
	printf("Sentence: ");
	gets(a);
	
	while(a[i]!='\0')
	{
		if(a[i] != '\0' && a[i] != ' ')
		{
			cnt++;
		}
		i++;
	}
	printf("\nTotal Char: %d\n",cnt);
//	printf("Total Numbers: %d",cnt1);	
}






