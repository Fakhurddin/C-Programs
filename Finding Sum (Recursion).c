#include <stdio.h>
int sum(int);
int main()
{
	int num,a;
	printf("Enter no of number do you want sum: ");
	scanf("%d",&num);
	a=sum(num);
	printf("Sum: %d",a);
}
int sum(int num)
{
	int sum1;
	
	if(num==1)
		return 1;
	else
		sum1=num+sum(num-1);	
	
	return sum1;
}