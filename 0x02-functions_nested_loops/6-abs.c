#include "main.h"
/**
 * _abs - a program that computes absolute value of an interger
 *
 * @i: the interger
 *
 * Return: Always 0 (success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
