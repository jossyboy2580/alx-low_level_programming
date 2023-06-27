#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -The entry poi t of a program that generates
 * a passcode for the program 101-crackme
 *
 * Return: always 0 success;
 */

int main(void)
{
	char passcode[84];
	int idx = 0, total = 0, diff1, diff2;

	srand(time(0));

	while (total < 2772)
	{
		passcode[idx] = 33 + rand() % 94;
		total += passcode[idx++];
	}

	passcode[idx] = '\0';

	if (total != 2772)
	{
		diff1 = (total - 2772) / 2;
		diff2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			diff1++;

		for (idx = 0; passcode[idx]; idx++)
		{
			if (passcode[idx] >= (33 + diff1))
			{
				passcode[idx] -= diff1;
				break;
			}
		}
		for (idx = 0; passcode[idx]; idx++)
		{
			if (passcode[idx] >= (33 + diff2))
			{
				passcode[idx] -= diff2;
				break;
			}
		}
	}

	printf("%s", passcode);

	return 0;
}
