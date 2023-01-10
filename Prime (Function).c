#include <stdio.h>
int prime();
int main()
{
	prime();
}
int prime()
{
	int a,b=0,i=1;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	for(i;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;
		}
	}
	if(b==2)
		printf("\tprime");
	else
		printf("\tNot prime");
}