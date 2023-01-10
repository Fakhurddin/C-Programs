#include <stdio.h>

void main()
{
    int num,rem,reverse=0;

    printf("Input a number: ");
    scanf("%d",&num);

    while(num)
	{
         rem = num % 10;
         reverse = reverse*10+rem;
         num = num / 10;
    }

	printf("%d",reverse);
}