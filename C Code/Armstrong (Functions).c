#include <stdio.h>
int armstrong(int Num)
{
	int temp,rem,cube,sum=0;
	
	temp = Num;
	
	while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		cube = rem*rem*rem;
		sum = sum + cube;
	}
	
	if(sum==Num)
		printf("Armstrong");
	else	
		printf("Not a Armstrong");
}
int main()
{
	int Num;

	printf("Number: ");
	scanf("%d",&Num);
	
	armstrong(Num);
}
