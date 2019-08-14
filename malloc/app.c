#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct teacher {
	char *name;
	char *address;
	char *lesson;
	char class[5];
	int age;
	char flag;
};

struct student {
	char *name;
	char *address;
	int age;
	int class;
	int number;
	char *parent_name;
	int parent_age;
};

void fun(void)
{
	struct teacher *pteacher;
	printf("pteacher:%ld\n", sizeof(pteacher));
	pteacher = malloc(sizeof(struct teacher) + 10*sizeof(struct student));
	memset(pteacher, 0, sizeof(struct teacher) + 10*sizeof(struct student));
	printf("struct teacher:%ld,struct student:%ld\n", sizeof(struct teacher), sizeof(struct student));
	free(pteacher);
}

int main(int argc, char *argv[])
{
	fun();	
	return 0;
}
