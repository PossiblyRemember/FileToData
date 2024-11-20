#include "FTD.h"

int main(int argc, char **argv) {
	if (argc == 0) {
		cerr << "No arguments. Should be path, width, and output.";
		return -1;
	}
	const char* input = argv[1];
	int width = atoi(argv[2]);
	const char* output = argv[3];
	writeBMP(input, width, output);
	system(output);
}