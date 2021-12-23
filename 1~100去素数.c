#include<stdio.h>
int prime(int k)//ÅĞ¶ÏËØÊı
{
	int  i;
	if (k == 1)
		return 0;
	else
	{
		for (i = 2; i < k; i++)
			if (k % i == 0)
				return 0;
			else
				return 1;
	}
}
int main()
{
	int m, n, count = 0, sum = 0;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	if (m >= 1 && n <= 500)
	{
		for (; m <= n - 1; m++)
		{
			if (prime(m))
			{
				count++;
				sum += m;
			}
		}
		printf("count=%d, sum=%d", count, sum);
	}
}