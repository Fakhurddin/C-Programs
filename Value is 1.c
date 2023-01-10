#include <stdio.h>

int main()
{
	int a,b,c, numOfSteps;
	
 	printf("Enter any number: ");
	scanf("%d",&a);
	
	b=a%2;
	
	while (a != 1)
    {         
        if (a <= 0)
        {
            printf("Error");
            break;
        }
        if (b == 0) 
        {
            c = a / 2;
            printf("\nThe Next Value is : %d", c);
            a = c;
            b = a%2;
            numOfSteps++;
        }else if (b == 1) 
        	{
            c = (a * 3) + 1;
            printf("\nThe Next Value is : %d", c);
            a = c;
            b = a%2;
            numOfSteps++;
        	} 
    }
 		   printf("\n\nNumber of Steps are : %d", numOfSteps);

    return 0;
}