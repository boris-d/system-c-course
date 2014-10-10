#include <stdio.h>
int main(int argc, char *argv[]) {
	char ch;
	FILE *src, *dst;
	src = fopen(argv[1], "r");
	dst = fopen(argv[2], "w");
	while( ( ch = fgetc(src) ) != EOF ) {
		fputc(ch, dst);
	}
fclose(src);
fclose(dst);
return 0;
}
