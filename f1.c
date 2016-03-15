#ifndef FUNCTION1
#include<stdio.h>
#define NUM 13
#define FUNCTION1

int main(void)
{
	int *pi = NULL;
	int i = NUM;
	int j = 3;
	
	printf("Value of i: %i\n", i);
	printf("Value of j: %d\n", j);
	
	pi = &i;
	printf("Value of pi: %p\n", pi);
	printf("Value of *pi: %d\n", *pi);

	return 0;
}
#endif
