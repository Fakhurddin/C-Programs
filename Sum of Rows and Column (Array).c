int main()
{
	int array1[3][3]={ },i=0,j=0,cnt=1,sum=0;

	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
		scanf("%d",&array1[i][j]);
		
		}
		printf("\n");
	}
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			printf("%d\  ",array1[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			sum = sum + array1[i][j];
		}
		printf("Sum of %d row: %d",cnt++,sum);
		printf("\n");
		sum=0;
	}
	printf("\n");
	cnt=1;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			sum = sum + array1[j][i];
		}
		printf("Sum of %d column: %d",cnt++,sum);
		printf("\n");
		sum=0;
	}
}