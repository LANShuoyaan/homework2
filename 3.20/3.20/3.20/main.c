#include <stdio.h>
int main() 
{
	int hour ;
	int rate ;
	while (1) 
	{
		printf("Enter # of hours worked:");
		scanf("%d", &hour);
		if (hour == -1)break;
		printf("Enter hourly rate of the worker:");
		scanf("%d", &rate);
		printf("salary is %d\n", hour*rate);
	}
}