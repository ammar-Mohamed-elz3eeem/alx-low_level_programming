#include "main.h"

/**
 * is_prime_number - check if entered number is prime or not
 * @n: number to check
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime_number - check if entered number is prime or not
 * @n: number to check
 * @denom: denomerator to determine if number can be divded by it or not
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime(int n, int denom)
{
	if (n % denom == 0)
		return (0);
	else if (denom == n - 1)
		return (1);
	return is_prime(n, denom + 1);
}
