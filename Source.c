#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int N = 0;
	int i = 0;
	int j = 0;
	double sum = 0;
	double min = 0.0;
	double max = 0.0;
	double integ = 0.0;  
	double frac = 0.0; 
	double* mas1;
	int* mas2;
	mas1 = (double*)malloc(N * sizeof(double));
	mas1 = (double*)malloc(N * sizeof(double));

	if (mas1 == 0)
		printf("Îרטבמקךא");

	printf("N = \t"); 
	scanf_s("%d", &N);
	if (N <= 0)
	{
		printf("מרטבÎ×ÊÀ N <= 0 !!!"); 
		return 0;
	}


	printf("min = \t");
	scanf_s("%lf", &min);

	printf("max = \t");
	scanf_s("%lf", &max);

	if (min > max)
	{
		printf("מרטבÎ×ÊÀ min < max !!!");
		return 0;
	}
	if (mas1 == 0)
	{
		printf("מרטבÎ×ÊÀ mas1 = 0");
		return 0;
	}
	

	for (i = 0; i < N; i++)
	{
		mas1[i] = (((double)rand()) / RAND_MAX) * (max - min) + min;  

	}

	for (i = 0; i < N; i++)
	{
		mas2[i] = ((mas1[i] - (int)mas1[i]) * 1000000); 
		if (mas2[i] < 0)
			mas2[i] *= -1;
		while (mas2[i] % 10 == 0) 
		{
			mas2[i] /= 10;
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == mas2[j])  
				sum = sum - mas1[i];
				mas1[i] = 0.0; 
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		sum = sum + mas1[i];
	}

	printf("sum = %lf", sum);

	free(mas1);
	free(mas2);
	return 0;
}




