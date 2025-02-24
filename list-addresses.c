#include <stdio.h>
#include <stdlib.h>

void extrafunction() {

}

int main(int argc, char* argv[]) {

	int var = 1524541;
	printf("stack variable: 0x%012X\n", (void*)&var);

	const char* str = "food";
	printf("initialized data: 0x%012X\n", (void*)&str);

	int x;
	printf("uninitialized data: 0x%012X\n", (void*)&x);

	printf("main: 0x%012X\n", (void*)&main);

	printf("function: 0x%012X\n", (void*)&extrafunction);

	return 1;
}
