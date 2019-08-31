#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#pragma pack(1)
struct s {
	char a;
	short b;
	char c;
	int d;
	char e[3];
};
#pragma pack()

int main(int argc, char *argv[])
{
	printf("sizeof(struct s):%zd\n", sizeof(struct s));
	printf("offsets->a:%zd; b:%zd; c:%zd; d:%zd; e[0]:%zd; e[1]:%zd; e[2]:%zd\n",
					offsetof(struct s, a), offsetof(struct s, b), 
					offsetof(struct s, c), offsetof(struct s, d),
					offsetof(struct s, e[0]), offsetof(struct s, e[1]),
					offsetof(struct s, e[2]));

	exit(EXIT_SUCCESS);
}


