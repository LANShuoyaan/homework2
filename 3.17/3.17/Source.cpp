#include <stdio.h>
int main()
{
	int number;
	double balance, charges, credits, limit;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &number);

	while (number != -1)
	{
		printf("Enter beginning balance: ");
		scanf("%lf", &balance);

		printf("Enter total charges: ");
		scanf("%lf", &charges);

		printf("Enter total credits: ");
		scanf("%lf", &credits);

		printf("Enter credit limit: ");
		scanf("%lf", &limit);

		double newBalance = balance + charges - credits;

		printf("\nAccount: %d\n", number);
		printf("Credit limit: $%.2lf\n", limit);
		printf("Balance: $%.2lf\n", newBalance);

		if (newBalance > limit)
		{
			printf("Credit Limit Exceeded.\n");
		}
		else {
			printf("Credit Limit Not Exceeded.\n");
		}
		printf("\nEnter account number (-1 to end): ");
		scanf("%d", &number);
	}

	return 0;
}