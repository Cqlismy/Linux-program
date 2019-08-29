#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct S1 {
	int i;		//[0]~[3],[4]~[7]is filled
	double b;	//[8]~[16]
	float f;	//[17]~[20],[21]~[23]is filled
};

struct S2 {
	char a[2];	//[0]-[1],[2]~[3]is filled
	int i;		//[4]~[7]
	double b;	//[8]~[15]
	short s;	//[16]~[17],[18]~[23]is filled
	struct S1 s1;		//[24]~[47]
};

int main(int argc, char *argv[])
{
	printf("sizeof(struct S1):%zd\nsizeof(struct S2):%zd\n",
										sizeof(struct S1),
										sizeof(struct S2));
	
	printf("S1 offsets: i=%zd; b=%zd; f=%zd.\n",
						offsetof(struct S1, i),
						offsetof(struct S1, b),
						offsetof(struct S1, f));

	printf("S2 offsets: a[0]=%zd; a[1]=%zd; i=%zd; b=%zd; s=%zd; s1=%zd.\n",
						offsetof(struct S2, a[0]),
						offsetof(struct S2, a[1]),
						offsetof(struct S2, i),
						offsetof(struct S2, b),
						offsetof(struct S2, s),
						offsetof(struct S2, s1));
	
	exit(EXIT_SUCCESS);
}
