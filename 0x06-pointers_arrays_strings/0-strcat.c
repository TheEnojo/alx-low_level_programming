#include "main.h"

/**
 * _strcat - function entry point
 * @dest: function param
 * @src: function param
 * Desc: concatenates two strings
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
0-strcat.c int len_d = 0;
0-strcat.c int len_s = 0;
0-strcat.c int x = 0;
0-strcat.c int y;

0-strcat.c while (dest[x])
0-strcat.c {
0-strcat.c 0-strcat.c len_d++;
0-strcat.c 0-strcat.c x++;
0-strcat.c }

0-strcat.c x = 0;
0-strcat.c while (src[x])
0-strcat.c {
0-strcat.c 0-strcat.c len_s++;
0-strcat.c 0-strcat.c x++;
0-strcat.c }

0-strcat.c for (y = 0; y <= len_s; y++)
0-strcat.c 0-strcat.c dest[len_d + y] = src[y];

0-strcat.c dest[len_d + y] = 0;

0-strcat.c return (dest);
}
