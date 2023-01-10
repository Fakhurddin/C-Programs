#include <stdio.h>
int swap();
int main()
{
	swap();
	swap();
}
int swap()
{
	int a,b,c;
	
	printf("Number 1 = ");
	scanf("%d",&a);
	printf("Number 2 = ");
	scanf("%d",&b);
	printf("\nAfter swaping\n");
	c=a;
	a=b;
	b=c;
	printf("\nNumber 1 = %d\n",a);
	printf("Number 2 = %d\n\n",c);
	printf("--------------\n");
}