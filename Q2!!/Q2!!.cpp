
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main()
{
	int N, i, j, m;
	
	printf("please write an uneven number...\n");
	scanf("%d", &N);

	int Nn = N / 2;

	for (j = 1;j<=N;j++)
	{

		if (j == 5)
		{
			printf("yo ");
		}
		else
		{
			for (i = j;i <= N;i++)
			{
				printf("%d ", i);
			}
			printf("\n ");
			N = N--;
		}
	}

	
	





}
