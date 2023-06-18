#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the last digit
 * of the number stored in the variable n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, r);
	if (r == 0)
		printf("last digit of %d is %d and is 0\n", n, r);
	if (r < 6 && r != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, r);
	return (0);
}
