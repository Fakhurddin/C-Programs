#include <stdio.h>
int armstrong();
int main()
{
	armstrong();
}
int armstrong()
{
	int	num,rem,cube,sum=0;
	
	printf("Number = ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		cube = rem*rem*rem;
		sum = sum + cube;
	}
	if(sum==num)
		printf("\nArmstrong");
	else	
		printf("\nNOT A Armstrong");
}
