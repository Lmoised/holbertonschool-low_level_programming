#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	a = 48;
	while  (a < 58)
	{
		putchar(a);
		if (a !=  57)
		{
			putchar(44);
			putchar(32);
			a++;
		}
		else
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
