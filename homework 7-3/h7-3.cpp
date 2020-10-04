#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i, j, high[100], num, k, m = -1, n, p;
	printf("HOW MANY PICTURE :");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("ENTER HIGH :");
		scanf("%d", &high[i]);
		if (high[i] > 0) {
			for (int k = 0; k < high[i] - 2; k++)
			{
				m = m + 3;
			}
			m = high[i] + m;

			for (int k = 1; k < high[i]; k++)
			{
				for (int j = 0; j < k; j++)
				{
					printf("* ");
				}
				if (m <= 0)
				{
					m = 0;
				}
				for (int j = 0; j < m; j++)
				{
					printf(" ");
				}
				m = m - 4;
				for (int j = 0; j < k; j++)
				{
					printf(" *");
				}
				printf("\n");
			}
			n = (2 * high[i]) - 1;
			for (int k = 0; k < n; k++)
			{
				printf("* ");
			}
			printf("\n");
			n = 1;
			for (int k = 1; k < high[i]; k++) {
				for (int j = 0; j < high[i] - k; j++) {
					printf("* ");
				}
				for (int j = 0; j < n; j++) {
					printf(" ");
				}
				n = n + 4;
				for (int j = 0; j < high[i] - k; j++) {
					printf(" *");
				}
				printf("\n");
			}
			m = -1;
		}

	}


	return 0;
}