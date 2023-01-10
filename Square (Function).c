#include <stdio.h>
int square();
int main()
{
	square();
	
}
int square()
{
	int a,b; 
	
	printf("Number = ");	
	scanf("%d",&a);

	b=a*a;
	printf("Square = %d",b);
}