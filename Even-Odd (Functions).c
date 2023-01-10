#include <stdio.h>
int even_odd();
int main()
{
	even_odd();
}
int even_odd()
{
	int a;
	
	printf("Number =  ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("Number = Even");
	}else
		printf("Number = Odd");
}