#include<stdio.h>
int main(int argc, char *argv[]) {
	FILE *f;
	char ch;
	f = fopen(argv[1], "r");
 	while((ch=fgetc(f)) != EOF){
         	putchar(ch);
    }
fclose(f);
return 0;
}


