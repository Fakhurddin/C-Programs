#include <stdio.h>

main ()
{
	int a;

	printf("Enter the number of multi: table: ");
	scanf("%d",&a);
	
	for(int i=1; i<=10; i++)
	{
	printf("%d X %d = %d\n",a,i,a*i);
	}

}