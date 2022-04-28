#include "main.h"

/**
 * is_prime_number - find if integer is a prime number
 * @n: integer
 * Return: 1 if input is prime, 0 otherwise
 */

int is_prime_number(int n)
{
return (prime(n, 2));
}

/**
 * prime - find if integer is a prime number
 * @n: integer
 * @res: integer
 * Return: 1 if input is prime, 0 otherwise
 */


int prime(int n, int res)
{
if (res >= n && n > 1)
return (1);
else if (n % res == 0 || n <= 1)
return (0);
else
return (prime(n, res + 1));
}
