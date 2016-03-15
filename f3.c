#include<stdio.h>

int main(void)
{
	int var[] = {10, 100, 200, 300};
	int i, *ptr;

	ptr = var;
	for ( i = 0; i < 4; i++ ) {
		printf("Adress of var[%d]: %p\n", i, ptr);
		printf("Value of var[%d]: %d\n", i, *ptr);
		printf("Add test: %d\n", var[i]);

		ptr++;
	}
	return 0;
}
