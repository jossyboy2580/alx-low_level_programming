#include <stdio.h>

int times(int n)
{
	int i, j, temp, prod, rem;
	int divider;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				divider = 1000;
				while (divider)
				{
					temp = prod / divider;
					rem = prod % divider;
					divider /= 10;
					if (temp == 0 && divider != 0 && j != 0)
						putchar(' ');
					if (temp != 0 || divider == 0)
						putchar('0' + temp);
					prod = rem;
				}
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
	return (0);
}

int main(void)
{
	times(7);
	times(15);
	times(0);
	times(12);
	return (0);
}
