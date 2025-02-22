#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	if (argc < 2) {
		printf("Enter argument");
		return 1;
	}

	char *endptr;
	for(int i = 1; i < argc; i++) {
		long result = strtol(argv[i], &endptr, 0); 
		result = result >> 8;
		int loworder = result & 0xFF;
		
		printf("0x%02X %3d\n", loworder, loworder);
	} 

	return 1;
}
