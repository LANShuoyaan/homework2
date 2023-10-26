#include <stdio.h>
int main() 
{
	int interest = 0;
	int principal = 0;
	int rate = 0;
	int days = 0;
	while (1) 
	{
		printf("Enter lone principal (-1 to end):");
		scanf("%d", &principal);
		if (principal == -1)break;
		printf("Enter interest rate:");
		scanf("%d", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &days);
		printf("The interest charge is :%d\n",principal*rate*days/365);
	}
	

}