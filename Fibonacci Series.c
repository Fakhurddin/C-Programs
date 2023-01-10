int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Fibonacci series of %d is:   ",num);
	while(num!=1)
	{
		printf("%d ",num);
		
		if(num%2==0)
		{
			num=num/2;
		}
		else
			num=num*3+1;
	}
	printf("1");
}