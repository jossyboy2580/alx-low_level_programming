#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long int n) {
	if (n < 2) return 0; // Numbers less than 2 are not prime
	if (n == 2) return 1; // 2 is prime

	if (n % 2 == 0) return 0; // Even numbers (except 2) are not prime

	for (unsigned long long int i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return 0; // Not a prime number
	}
	return 1; // Prime number
}

int main(void) {
	unsigned long long int number = 612852475143;
	unsigned long long int num2 = number;
	unsigned long long int largest = 0;
	unsigned long long int present = 0; // Initialize present

	while (num2 % 2 == 0 && num2 != 1) {
		largest = 2;
		num2 = num2 / 2;
	}
	for (unsigned long long int i = 3; i <= num2; i += 2) {
		if (is_prime(i)) {
			present = i;
			while (num2 % present == 0 && num2 != 1) {
				if (present > largest)
					largest = present;
				num2 = num2 / present;
			}
		}
	}
	printf("%llu\n", largest);
	return 0;
}
