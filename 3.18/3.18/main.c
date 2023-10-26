#include <stdio.h>
int main() 
{
	float dollar=0.0;

	
	while (1) 
	{
		printf("enter sales in dollars(-1 to end):");
		scanf("%f", &dollar);
		if (dollar == -1) break;
		printf("Salars is :%.2f\n", 200.00 + dollar * 0.09);
	}
	
}