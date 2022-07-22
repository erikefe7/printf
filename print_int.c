#include "main.h"

/**
 * print_int - prints a given integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: number of characters printed on success
 */

int print_int(va_list args)
{
	int i = 0;
	int count = 0;
	int numb;
	int my_arr[10];
	char x[1];

	/*fetch integer from variadic parameter*/
	numb = va_arg(args, int);

	/*break the numbers apart and assign the to array*/
	while (numb != 0)
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else
			i++;
	}

	/*Write the contents of the array to the stdout*/
	for (i, i >=0; i--)
	{
		x[0] = ('0' + my_arr[i]); /*convert int to char*/
		count += write(1, x, 1);
	}

	return (count);
}
