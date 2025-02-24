#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		unsigned long long value = atoll(argv[i]);
		printf("0x%012llX\n", value);
	}
	return 0;
}
