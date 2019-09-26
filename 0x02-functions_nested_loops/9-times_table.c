#include "holberton.h"
/**
 *times_table - This is the logical function prototype
 *Return: Display return
 */
void times_table(void)
{
        int var1, var2, var3;

        for (var1 = 0; var1 <= 9; var1++)
                {
                        for (var2 = 0; var2 <= 9; var2++)
                                {
                                        var3 = (var1 * var2);
                                        if (var3 <= 9)
                                                {
                                                        if (var2 != 0)
                                                                {
                                                                        _putchar(' ');
                                                                        _putchar(' ');
                                                                }
                                                        _putchar(var3 + '0');
                                                }
                                        else
                                                {
                                                        _putchar(' ');
                                                        _putchar(var3 / 10 + '0');
                                                        _putchar(var3 % 10 + '0');
                                                }
                                        if (var2 != 9)
                                                {
                                                        _putchar(',');
                                                }
                                }
                        _putchar('\n');
                }
}
