#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that perform simple op
 * @argc: num of arg
 * @argv: arr of arg
 * Return: 0(succcessful)
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("ERROR\n");
		exit(98);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
