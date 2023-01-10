#include <stdio.h>
#include <string.h>
int main()
{
	int i,l,l2;
	char ch,a[]="Fakhurddin";

	l=strlen(a);

	for(int i=0;i<=l/2;i++)
	{
		ch = a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=ch;
	}
	printf("%s",a);









/*	char b[5]=" Ali";
	
	strcat(a,b);
	
	for(i=0;a[i]!=0;i++)
	{
	printf("%c  ",a[i]);
	}
	
	puts(b);
	strlwr(a);
	printf("%s",a);

	l1=strlen(a);
	l2=strlen(b);

	for(int i=0;i<=l2;i++)
	{
		a[l1+i]=b[i];
	}
	
	printf("string = %s",a);
*/
}