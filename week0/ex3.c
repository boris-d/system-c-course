#include<stdio.h>
int main(int argc, char *argv[]) {
    FILE *f;
	f = fopen(argv[2], "w");
	fprintf(f, "%s\n", argv[1]);
	fclose(f);
	return 0;
}
