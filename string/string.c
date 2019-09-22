#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * mystrchr - Find the first occurrence of a character in a string
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

int main(int argc, char *argv[])
{
	int len = strlen("/home/hly/learn/string");
	char *str = (char *)malloc(len);
	char *s;

	memset(str, 0, len);
	memcpy(str, "/home/hly/learn/string", len);
	printf("old_str:%s\n", str);
	while (s = mystrchr(str, '/'))
		s[0] = '@';
	printf("new_str:%s\n", str);

	return 0;
}
