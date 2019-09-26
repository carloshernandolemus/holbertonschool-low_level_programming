/**
 *print_to_98 - This is the logical function prototype number
 *@var1: Variable
 *Return: Display return
 */
void print_to_98(int var1)
{
	if (var1 < 98)
	{
		for (; var1 <= 98; var1++)
		{
			printf(" %d", var1);
			if (var1 != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (var1 > 98)
	{
		for (; var1 >= 98; var1--)
		{
			printf("%d", var1);
			if (var1 != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d", var1);
		printf("\n");
	}
}
