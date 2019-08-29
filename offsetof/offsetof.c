#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct s {
	int i;
	char c;
	double d;
	char a[];
};

int main(int argc, char *argv[])
{
	printf("sizeof(struct s)=%zd\n", sizeof(struct s));
	printf("offsets: i=%zd; c=%zd; d=%zd; a=%zd.\n",
			offsetof(struct s, i), offsetof(struct s, c),
			offsetof(struct s, d), offsetof(struct s, a));
	
	exit(EXIT_SUCCESS);
}



