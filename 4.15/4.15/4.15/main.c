#include <stdio.h>
int main() 
{
	float rate, interest;
	rate = 0.1;
	for (int i = 0; i < 5; i++)
	{
		interest = 5000;
		for (int j = 1; j <=15; j++)
		{
			interest = interest + interest * rate;
		}
		printf("For an interest rate of %f, the final amount will be %f\n", rate, interest);
		rate = rate + 0.005;
	}
}