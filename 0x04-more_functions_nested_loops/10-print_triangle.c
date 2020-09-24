#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int spaces;
;
	for (i = 0; i < size; i++)
	{
		for (spaces = size - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
