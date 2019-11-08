#include <stdio.h>
/**
 * binary_to_uint - Function that convert from binary to unsigned int.
 * @b: Binary string
 * Return: Decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int var1;
	int var2, var3 = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[var3])
	{
		if (((b[var3] - '0') != 0) && ((b[var3] - '0') != 1))
			return (0);
		var3++;
	}

	for (var1 = var3 - 1, var2 = 0; var1 >= 0; --n)
	{
		result += (b[var1] - '0') << var2;
		var2++;
	}
	return (result);
}
