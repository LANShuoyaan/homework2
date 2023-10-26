#include <stdio.h>
int main() 
{
	int length, breadth;
	int i, j;
	printf("Enter the length and breadth:");
	scanf("%d %d", &length,&breadth);
	for(i = 1; i <= length; i++)
	{
		for (j = 1; j <= breadth; j++)
		{
			if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
				printf("*");
			if ((i != 1) && (i != length) && (j != 1) && (j != breadth))
				printf(" ");
		}
		printf("\n");
	}
}