#include <stdio.h>

/**
 * main - It prints number of arguments passed.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

