#include <stdio.h>
int large();
int main()
{
	large();
}
int large()
{
	int num[5],a=1;
	
	for(int i=0;i<5;i++)
	{
	printf("%d Numbers = ",a++);
	scanf("%d",&num[i]);
	}
	
	if(num[0] > num[1] && num[0] > num[2] && num[0] > num[3] && num[0] > num[4] )
	{
		printf("\nLargest = %d",num[0]);
	}
	if(num[1] > num[2] && num[1] > num[3] && num[1] > num[4] )
	{
		printf("\nLargest = %d",num[1]);
	}
	if(num[2] > num[3] && num[2] > num[4] )
	{
		printf("\nLargest = %d",num[2]);
	}
	if(num[3] > num[4] )
	{
		printf("\nLargest = %d",num[3]);
	}
	else
	{
		printf("\nLargest = %d",num[4]);
	}











}