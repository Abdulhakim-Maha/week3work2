#include<stdio.h>
int main() {
	int i, j, n;
	printf("Enter your number :");
	scanf_s("%d", &n);

	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (j == 1 || i == n || i == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}