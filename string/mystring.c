#include "mystring.h"

/**
 * mystrlen - Get the length of a string
 * @s: The string to be sized
 */
int mystrlen(const char *s)
{
	const char *sc;

	for (sc = s; *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}

/**
 * mystrchr - Get the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to search for
 */
char *mystrchr(const char *s, int c)
{
	for (; *s != (char)c; ++s)
		if (*s == '\0')
			return NULL;
	return (char *)s;
}

