#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"

int main(int argc, char *argv[])
{
	int len = mystrlen("/home/hly/learn");
	char *str = (char *)malloc(len);
	char *s;

	printf("len:%d\n", len);
	memset(str, 0, len);
	memcpy(str, "/home/hly/learn", len);
	printf("old-str:%s\n", str);
	while (s = mystrchr(str, '/'))
		s[0] = '@';
	printf("new-str:%s\n", str);

	return 0;
}
