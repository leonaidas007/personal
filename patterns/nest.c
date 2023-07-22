#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j, cols, rows;
	
	printf("Enter number of rows:%d\n", rows);
	scanf("%d", &rows);
	printf("Enter number of columns:%d\n", cols);
	scanf("%d", &cols);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
			{
				printf("%d", j);
			}
		printf("\n");
	}
	return (0);
}
