int main()
{
	int num[3]={},a,sum=0,cnt=1;
	
	printf("Enter the no of element in row: ");
	scanf("%d",&a);
	printf("\n");
	for(int i=0;i<a;i++)
	{
		printf("Enter %d elements: ",cnt++);
		scanf("%d",&num[i]);
		sum = sum + num[i];
	}
	printf("\n");
	for(int i=0;i<a;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	printf("\nSum = %d",sum);
}