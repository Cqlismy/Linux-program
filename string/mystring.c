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

/**
 * mymemcpy - Compare two areas of memory
 * @cs: One area of memory
 * @ct: Another area of memory
 */
int mymemcpy(const void *cs, const void *ct, int count)
{
	const unsigned char *su1, *su2;
	int res = 0;

	for (su1 = cs, su2 = ct; 0 < count; ++su1, ++su2, count--)
		if ((res = *su1 - *su2) != 0)
			break;
	return res;
}



