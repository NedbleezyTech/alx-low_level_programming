#include <stdio.h>

int main(void)
{
	char ch;

	int in;

	long lg;

	float ft;

	printf("Size of a char: %zu byte(s)\n",sizeof(ch));
	printf("Size of a int: %zu byte(s)\n",sizeof(in));
	printf("Size of a long: %zu byte(s)\n",sizeof(lg));
	printf("Size of a float: %zu byte(s)\n",sizeof(ft));

	return(0);
}	
