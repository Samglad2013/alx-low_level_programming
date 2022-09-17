#include "main.h"

/**
 * largest_number - returns the largest 2 of numbers
 * @a: first integer
 * @b: second integer
 * Return: largest number
 */
int largest_number(int a, int b)
{
int largest = a;
if (largest < b)
{
largest = b;
}
return (largest);
}
