#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"

int main(int argc, char *argv[])
{
	int len = mystrlen("/home/hly/learn");
	char *str = (char *)malloc(len);
	char *s;
	const char *cs = "aab";
	const char *ct = "aaa";
	int ret;
	const char *s1 = "/home/hly/learn";
	const char *s2 = "hly";

	printf("mystrlen:\nlen=%d\n", len);
	memset(str, 0, len);
	memcpy(str, "/home/hly/learn", len);
	printf("mystrchr:\n");
	printf("old-string:%s\n", str);
	while (s = mystrchr(str, '/'))
		s[0] = '@';
	printf("new-string:%s\n", str);

	ret = mymemcpy(cs, ct, mystrlen(cs));
	printf("mymemcpy:\ncs=%s,cs=%s,ret=%d\n", cs, ct, ret);
	
	s = NULL;
	s = (char *)mystrstr(s1, s2);
	printf("mystrstr:\ns1=%s,s2=%s,s=%s\n", s1, s2, s);

	return 0;
}
