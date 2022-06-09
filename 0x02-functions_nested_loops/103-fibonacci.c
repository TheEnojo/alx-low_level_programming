#include <stdio.h>
/**
 * main - a program that prints the sum of even valued terms
 * followed by a new line
 * considering the term in the f.s whose value exceeds 4000000
 *
 * Return: 0
 */
int main(void)
{
int a = 0, b = 1, next = 0;
int sum = 0;

while (next < 4000000)
{
next = a + b;
a = b;
b = next;
if (next % 2 == 0)
sum += next;
}
printf("%i\n", sum);
return (0);
}
