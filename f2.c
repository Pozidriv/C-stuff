#ifndef FUNCTION2
#include<stdio.h>

int main(void)
{
	int var = 76;
	int *ptr = NULL;
	int **pptr = NULL;
	
	pptr = &ptr;
	ptr = &var;
	
	printf("Value of var: %d\n", var);
	printf("Value of ptr: %p\n", ptr);
	printf("Value of *ptr: %d\n", *ptr);
	printf("Value of pptr: %p\n", pptr);
	printf("Value of *pptr: %p\n", *pptr);
	printf("Value of **pptr: %d\n", **pptr);
	
	return 0;
}
#endif
