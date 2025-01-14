#include <stdio.h>
int even_odd(int Num)
{
	if(Num%2==0)
		printf("Even");
	else
		printf("Odd");
}
int main()
{
	int Num;
	
	printf("Number: ");
	scanf("%d",&Num);
	
	even_odd(Num);
}

