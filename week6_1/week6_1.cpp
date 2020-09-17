#include<stdio.h>
int main()
{
	int size = 0;
	scanf_s("%d", &size);
	int metrix_1[100][100] = { 0 };
	int metrix_2[100][100] = { 0 };
	int multiply[100][100] = { 0 };
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			scanf_s("%d", &metrix_1[i][j]);
		}
	}
	printf("*\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			scanf_s("%d", &metrix_2[i][j]);
		}
	}
	printf("=\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				multiply[i][j] += metrix_1[i][k] * metrix_2[k][j];
			}
			printf("%d ", multiply[i][j]);
		}
		printf("\n");
	}
	return 0;
}