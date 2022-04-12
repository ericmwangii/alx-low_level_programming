#include "main.h"
/**
   * _isalpha - Entry point
   * @c: The character to check
   *Description: if c is alphabet or not
   *Return: 1 if c is uppercase or lowercase and 0 otherwise
*/

int _isalpha(int c)
{
return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

