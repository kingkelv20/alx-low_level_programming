/*
 * File: 2-print_alphabet_x10.c
 * * Auth: kelvin Agimogim
 */


#include "holberton.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
