#include <string.h>
#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to the main string
 * @accept: pointer to the substring
 *
 * Return: the number of bytes in the innitial segment of s
 *
 * Created by: Abdullahi Fatimah
 * cc: 14th november, 2022
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
