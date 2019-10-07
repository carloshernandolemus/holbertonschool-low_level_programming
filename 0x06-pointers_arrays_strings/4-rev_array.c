#include "holberton.h"
/**
 *reverse_array - This is the function of reverse
 *@a: This is a array
 *@n: This is a size
 *Return: Return value
 */
void reverse_array(int *a, int n)
{
	int var1;
	int var2;
	int var3;

	n = n - 1;
	for (var1 = n; var1 > (n / 2); var1--)
	{
		var2 = a[var1];
		var3 = n - var1;
		a[var1] = a[var3];
		a[var3] = var2;
	}
}
