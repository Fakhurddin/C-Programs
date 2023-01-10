#include <stdio.h>
struct data
{
	int roll;
	char name[10];
	float avg;
};


int main()
{
	struct data d={45,"Fakhur"};
	struct data *ptr=&d;
	
	printf("%d  %s  %f",ptr->roll,ptr->name,ptr->avg);
}