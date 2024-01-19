#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *s;

	s = string_nconcat("Hello", NULL, 12);
	if (s == NULL)
		return (1);
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, "Hello", 0);
	if (s == NULL)
		return (1);
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, NULL, 10);
	if (s == NULL)
		return (1);
	printf("%s\n", s);
	free(s);
	return (0);
}
