#include <stdio.h>
int main()
{
	int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int *p;	
	
	for( p=&num[0][0];*p<=num[2][2];p++)
	{
		printf("%d ",*p);
	}
}
