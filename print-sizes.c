#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[]) {

	int intvar = 978;
	int *intptr;
	char carray[200];
	char *cptr;
	long num = 123;
	long *longptr;
	
	printf("The size of char is %i\n", sizeof(char));
	printf("The size of short is %i\n", sizeof(short));
	printf("The size of int is %i\n", sizeof(int));
	printf("The size of long is %i\n", sizeof(long));
	printf("The size of long long is %i\n", sizeof(long long));
	printf("The size of float is %i\n", sizeof(float));
	printf("The size of double is %i\n", sizeof(double));
	printf("The size of char \ast is %i\n", sizeof(*cptr));
	printf("The size of int \ast is %i\n", sizeof(*intptr));
	printf("The size of long \ast is %i\n", sizeof(*longptr));
	printf("The size of my character array is  %i\n", sizeof(carray));
	cptr = carray;
	printf("The size of my character pointer is %i\n", sizeof(cptr));
	intptr = &intvar;
	printf("The size of my int pointer is %i\n", sizeof(intptr));
	printf("The size of what my integer pointer points at is %i\n", sizeof(*intptr));

}
